import numpy as np

a = np.array([ [[1, 2, 4], [3, 4, 5]],[[8, 9, 7], [10, 11, 12]] ])
print(a)
print(a[1].shape, 'Shape')
# the shape of an array is a tuple of integers giving the size of the array along each dimension.
print(a.size, 'no. of elemeents')
print(a.ndim, '-D')
print('--------------------------------------------------------')

b = np.array([[[3, 4], [2, 5]]])
print(b)
print(b.shape, 'Shape')
print(b.size, 'no. of elemeents')
print(b.ndim, '-D')
