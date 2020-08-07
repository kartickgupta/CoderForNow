import random
import math
import pygame
import logging
from blob import Blob

logging.basicConfig(filename='blobWorld.log', level=logging.DEBUG)

STARTING_BLUE = 10
STARTING_RED = 20
STARTING_GREEN = 100
HEIGHT = 600
WIDTH = 800
RED = (255, 0 , 0)
GREEN = (0, 255, 0)
BLUE = (0, 0, 255)
WHITE = (255, 255, 255)

game_display = pygame.display.set_mode((WIDTH, HEIGHT)) #! Takes a tuple of widht and height
pygame.display.set_caption('Blob World!')
clock = pygame.time.Clock()     # Useful for Frames Per Second

class BlueBlob(Blob):
    
    def __init__(self, colour, x_boundary, y_boundary):
        super().__init__(BLUE, x_boundary, y_boundary)

    def __add__(self, other_blob):
        if other_blob.colour == (255, 0, 0):
            self.size -= other_blob.size
            other_blob.size -= self.size
        
        elif other_blob.colour == (0, 255, 0):
            self.size += other_blob.size
            other_blob.size  = 0
        
        elif other_blob.colour == (0, 0, 255):
            pass
        else:
            raise Exception('Two Non-interacting blobs collided')        

class GreenBlob(Blob):
    
    def __init__(self, colour, x_boundary, y_boundary):
        super().__init__(GREEN, x_boundary, y_boundary)
        
class RedBlob(Blob):
    
    def __init__(self, colour, x_boundary, y_boundary):
        super().__init__(RED, x_boundary, y_boundary)

def is_touching(blob1, blob2):
    dist = math.sqrt((blob1.x - blob2.x)**2 + (blob1.y - blob2.y)**2)
    return dist <= (blob1.size + blob2.size)

def detect_collision(blob_list):
    reds, greens, blues = blob_list
    for blue_id, blue_blob in blues.copy().items():
        for other_blobs in blues, greens, reds:
            for other_id, other_blob in other_blobs.copy().items():
                if blue_blob == other_blob:
                    pass
                else:
                    if is_touching(blue_blob, other_blob):
                        blue_blob + other_blob
                        #print('{} {} collided !'.format(str(blue_blob.colour), str(other_blob.colour)))
                        logging.info('{} {} collided !'.format(str(blue_blob.colour), str(other_blob.colour)) )
                        if  blue_blob.size <= 0:
                            del blues[blue_id]
                        if other_blob.size <= 0:
                            del other_blobs[other_id]
    
    return reds, greens, blues

def game_environment(blob_dicts):
    blob_dicts = detect_collision(blob_dicts)
    game_display.fill(WHITE) # For bg colour for every frame happends in backend
    
    for blobs in blob_dicts:
        for blob_id in blobs:
                blob = blobs[blob_id]
                #!pygame.draw.circle(where to display, colour, list of location, size)
                pygame.draw.circle(game_display, blob.colour, [blob.x, blob.y], blob.size)                
                blob.move()
                blob.boundary_check(blob_id)
    
    pygame.display.update() # Send it to the screen, output
    return blob_dicts

def main():
    blue_blob_list = dict(enumerate([BlueBlob(BLUE, WIDTH, HEIGHT) for i in range(STARTING_BLUE)]))
    red_blob_list = dict(enumerate([Blob(RED, WIDTH, HEIGHT) for i in range(STARTING_RED)]))
    green_blob_list = dict(enumerate([Blob(GREEN, WIDTH, HEIGHT) for i in range(STARTING_GREEN)]))
    
    while  True:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.display.quit()
                pygame.quit()
                quit()
        
        red_blob_list, green_blob_list, blue_blob_list = game_environment([red_blob_list, green_blob_list, blue_blob_list])
        clock.tick(60)

if __name__ == '__main__':
    main()
