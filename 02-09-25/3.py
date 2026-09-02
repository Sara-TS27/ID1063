n=int(input("Enter n: "))
a=[]
count=[0]*10
print("Enter the values:")
for i in range(n):
    x=int(input())
    a.append(x)
    k[x]=k[x]+1
for i in range(10):
    print(i, " : ", count[i])
