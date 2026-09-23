import numpy as np
def rms(a): #define a function
    return np.sqrt(np.mean(a ** 2)) #first it takes mean of the entered values then it takes sq root
n = int(input())
a = np.array(list(map(float, input().split())))  #input.split seperates the elements entered when there is spce between them# map converts the strings into actual decimal points
#list holds the values and np.a
print(f"{rms(np.array([3, 4, 0, 5])):.2f}")       # Output: 3.54[span_1](start_span)[span_1](end_span)
print(f"{rms(np.array([1, -1, 1, -1, 1])):.2f}") # Output: 1.00[span_2](start_span)[span_2](end_span)
print(f"{rms(np.array([7.5])):.2f}")        
n = int(input())
a = np.array(list(map(float, input().split())))
print(f"{rms(a):.2f}")


