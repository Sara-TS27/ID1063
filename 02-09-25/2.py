n=int(input("Enter n: "))
a=input("Enter vector a: ").split()
b=input("Enter vector b: ").split()
d=0
for i in range(n):
    d = d + float(a[i]) * float(b[i])
print("Dot pdt =", d)
