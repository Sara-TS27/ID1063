import numpy as np
n = int(input("Enter size of vector: "))
v = np.arange(1, n + 1)
v = v.reshape(n, 1) 
v_transpose = v.T   
print("v =")
print(v)
print("v transpose =")
print(v_transpose)
