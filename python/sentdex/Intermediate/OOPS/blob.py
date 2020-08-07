import random
import logging

# logging.basicConfig(filename='blob_class.log', level=logging.DEBUG)
class Blob:
    def __init__(self, colour, x_boundary, y_boundary, size=(7, 10), movement_range = (-4, 5)):
        self.colour = colour
        self.x_boundary = x_boundary
        self.y_boundary = y_boundary
        self.x = random.randrange(0, self.x_boundary)
        self.y = random.randrange(0, self.y_boundary)
        self.size = random.randrange(size[0], size[1])
        self.movement_range = movement_range
    
    def move(self):
        self.move_x = random.randrange(self.movement_range[0], self.movement_range[1])
        self.move_y = random.randrange(self.movement_range[0], self.movement_range[1])
        self.x += self.move_x
        self.y += self.move_y        

    def boundary_check(self, blob_id):
        if self.x < 0 : 
            self.x = 0
            logging.debug(f'Report in Class {blob_id} {self.colour} touched Width')
        elif self.x > self.x_boundary : 
            self.x = self.x_boundary
            logging.debug(f'Report in Class {blob_id} {self.colour} touched Width')
        if self.y < 0 : 
            self.y = 0
            logging.debug(f'Report in Class {blob_id} {self.colour} touched Height')
        elif self.y > self.y_boundary : 
            self.y = self.y_boundary
            logging.debug(f'Report in Class {blob_id} {self.colour} touched Height')