import matplotlib.pyplot as plt
import numpy as np

#Define function & initial guess
x0=1.0 
f_x0=np.exp(x0) - 2
df_x0=np.exp(x0)

#Newton-Raphson formula
x1=x0-(f_x0/df_x0)

#Create graph
x=np.linspace(0.2, 1.3, 100)
plt.plot(x, np.exp(x)-2, color="blue", label="f(x) = e^x - 2")
plt.axhline(0, color="black", linestyle="--")  # x-axis

# 4. Plot points
plt.plot(x0, f_x0, "ro", label=f"x0 = {x0:.1f}")  # Starting point
plt.plot(x1, 0, "go", label=f"x1 = {x1:.2f}")  # Calculated answer
plt.grid(True)
plt.legend()
plt.savefig("33.png")

