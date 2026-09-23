#Read rows and columns 
print("enter values of m and n:")
a = input().split()
m = int(a[0])
n = int(a[1])
if m<1 or m>100 or n<1 or n>100:
   print("invalid") 

#input threshold value T
print("enter threshold: ")
T = int(input())

print("enter input: ")
#Process each row
for i in range(m):
    #Read the row of pixel values
    row = input().split()

    #Look at each pixel in the row
    for j in range(n):
        pixel = int(row[j])

       #check if pixel is greater then the threshold
        if pixel >= T:
            print(255, end=" ")
        else:
            print(0, end=" ")

    # new line
    print()

