import numpy as np
 
x = np.arange(0, 20)
print(x.ndim, x.shape)
print(x)
x = x.reshape(2, 10)
print(x.ndim, x.shape)
print(x)
x = x.reshape(4, 5)
print(x.ndim, x.shape)
print(x)
