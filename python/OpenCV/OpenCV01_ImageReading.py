import cv2
import numpy as np
from matplotlib import pyplot as plt



imgLocation = '/home/kartickgupta/1'

# to read an colored image in grayscale
# IMREAD_GRAYSCALE = 0
# IMREAD_COLOR = 1
# IMREAD_UNCHANGED = -1

img = cv2.imread(imgLocation,cv2.IMREAD_UNCHANGED)

# T0 display image
cv2.imshow('image',img)

cv2.waitKey(0) # To wait for - milliseconds after image opening

# imwrite('name.ext', img) to the save the image in working directory
cv2.imwrite('2.png', img)

cv2.destroyAllWindows()