import numpy as np
import matplotlib.pyplot as plt

# ---------------------------------------------------------
# 1. Newton-Raphson Calculation
# ---------------------------------------------------------

# Define the function and its derivative
def f(x):
    return x**3 - 2*x - 5

def f_prime(x):
    return 3*x**2 - 2

# Initial guess
x0 = 3.0

# Calculate values for single iteration
f_x0 = f(x0)
f_prime_x0 = f_prime(x0)

# Newton-Raphson formula: x1 = x0 - f(x0) / f'(x0)
x1 = x0 - (f_x0 / f_prime_x0)

print(f"Initial Guess (x0): {x0}")
print(f"f(x0): {f_x0}")
print(f"f'(x0): {f_prime_x0}")
print(f"Unrounded x1: {x1}")
print(f"Rounded x1 (2 decimal places): {x1:.2f}")

# ---------------------------------------------------------
# 2. Plotting the Cubic Function & Iteration
# ---------------------------------------------------------

# Generate points for the cubic curve
x_vals = np.linspace(1.0, 3.5, 400)
y_vals = f(x_vals)

plt.figure(figsize=(8, 5))

# Plot the curve f(x) and the x-axis reference (y = 0)
plt.plot(x_vals, y_vals, label=r'$f(x) = x^3 - 2x - 5$', color='blue', linewidth=2)
plt.axhline(0, color='black', linestyle='--', linewidth=1, label='$y = 0$')

# Plot the tangent line at x0: y = f'(x0)*(x - x0) + f(x0)
tangent_x = np.linspace(2.0, 3.3, 100)
tangent_y = f_prime_x0 * (tangent_x - x0) + f_x0
plt.plot(tangent_x, tangent_y, color='red', linestyle=':', label='Tangent line at $x_0 = 3$')

# Highlight x0 and x1 points
plt.scatter([x0], [f_x0], color='red', zorder=5, label=f'Initial point $(x_0, f(x_0)) = (3, 16)$')
plt.scatter([x1], [0], color='green', zorder=5, label=f'First iteration $(x_1, 0) = ({x1:.2f}, 0)$')

# Labels and plot formatting
plt.title('Newton-Raphson Method Visualization')
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.grid(True, linestyle='--', alpha=0.5)
plt.legend()
plt.tight_layout()

# Save image file directly (without using plt.show())
plt.savefig('/sdcard/Download/newton_raphson_combined.jpg')

