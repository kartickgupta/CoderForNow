import random
import pygame
from blob import Blob

STARTING_BLUE = 10
STARTING_RED = 5
HEIGHT = 600
WIDTH = 800
RED = (225, 0 , 0)
GREEN = (0, 225, 0)
BLUE = (0, 0, 225)
WHITE = (225, 225, 225)

game_display = pygame.display.set_mode((WIDTH, HEIGHT)) #! Takes a tuple of widht and height
pygame.display.set_caption('Blob World!')
clock = pygame.time.Clock()     # Useful for Frames Per Second

class BlueBlob(Blob):
    
    def __init__(self, colour, x_boundary, y_boundary):
        super().__init__(colour, x_boundary, y_boundary)
        self.colour = BLUE

    def move(self, fast_range= (-7, 7)):
        self.x += random.randrange(fast_range[0], fast_range[1])
        self.y += random.randrange(fast_range[0], fast_range[1])        
        

def game_environment(blob_dict):
    game_display.fill(WHITE) # For bg colour for every frame happends in backend
    for blobs in blob_dict:
        for blob_id in blobs:
                blob = blobs[blob_id]
                #!pygame.draw.circle(where to display, colour, list of location, size)
                pygame.draw.circle(game_display, blob.colour, [blob.x, blob.y], blob.size)                
                blob.move()
                blob.boundary_check(blob_id)
    pygame.display.update() # Send it to the screen, output

def main():
    blue_blob_list = dict(enumerate([BlueBlob(BLUE, WIDTH, HEIGHT) for i in range(STARTING_BLUE)]))
    red_blob_list = dict(enumerate([BlueBlob(RED, WIDTH, HEIGHT) for i in range(STARTING_RED)]))
    while  True:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.display.quit()
                pygame.quit()
                quit()
        
        game_environment([blue_blob_list, red_blob_list])
        clock.tick(60)

if __name__ == '__main__':
    main()
