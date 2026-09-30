import numpy as np

# Define matrices A and B
A = np.array([
    [7, 6, 4],
    [2, 0, 5],
    [1, 2, 7]
])

B = np.array([
    [3, 6, 2, 0],
    [1, 7, 4, 6],
    [3, 0, 4, 5]
])

# Perform matrix multiplication
C = np.dot(A, B)

print(C)

