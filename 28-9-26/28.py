import numpy as np
import matplotlib.pyplot as plt

# Range for x
x = np.linspace(0, 6, 200)

# Linear equations:
# 1) y = 7 - x
# 2) y = 13 - 3x
y1 = 7 - x
y2 = 13 - 3 * x

plt.figure(figsize=(8, 6))

# Plot lines
plt.plot(x, y1, label='x + y = 7', color='blue', linewidth=2)
plt.plot(x, y2, label='3x + y = 13', color='green', linewidth=2)

# Point of intersection
plt.plot(3, 4, 'ro', markersize=8, label='Intersection (3, 4)')

# Labels & styling
plt.xlabel('x', fontsize=12)
plt.ylabel('y', fontsize=12)
plt.title('Graph of Linear Equations', fontsize=14)
plt.xlim(0, 6)
plt.ylim(0, 8)
plt.grid(True, linestyle='--', alpha=0.7)
plt.legend(fontsize=11)

plt.tight_layout()

# Save plot to file and clean memory without calling plt.show()
plt.savefig('linear_equations_plot.png', dpi=300)
plt.close()

