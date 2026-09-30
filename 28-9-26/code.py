import numpy as np
import matplotlib.pyplot as plt

# Parameter t (x3)
t = np.linspace(-5, 5, 100)

# Parametric equations: x1 = -2t, x2 = t, x3 = t
x1 = -2 * t
x2 = t
x3 = t
# Setup 3D plot
fig = plt.figure(figsize=(8, 6))
ax = fig.add_subplot(111, projection='3d')
# Plot line and origin point
ax.plot(x1, x2, x3, label=r'$\mathbf{x} = t(-2, 1, 1)^T$', color='blue', linewidth=2.5)
ax.scatter([0], [0], [0], color='red', s=50, label='Origin (0,0,0)')
# Axis labels & styling
ax.set_xlabel('$x_1$')
ax.set_ylabel('$x_2$')
ax.set_zlabel('$x_3$')
ax.set_title('3D Graph of Line: $x_1 + 2x_3 = 0, -x_2 + x_3 = 0$')
ax.legend()
ax.grid(True)
plt.savefig('line_graph.png', dpi=300, bbox_inches='tight')
plt.close()

print("Graph saved as line_graph.png")

