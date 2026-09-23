import numpy as np
def rms(a): #define a function
    return np.sqrt(np.mean(a ** 2)) #first it takes mean of the entered values then it takes sq root
n = int(input())
a = np.array(list(map(float, input().split())))  #input.split seperates the elements entered when there is spce between them# map converts the strings into actual decimal points
#list holds the values and np.arry converts it into a array

print(f"{rms(a):.2f}")



