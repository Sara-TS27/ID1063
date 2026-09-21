import matplotlib.pyplot as plt
import numpy as np

# System parameters
tau = 40  # Time constant in seconds
t = np.linspace(0, 200, 500)
v_out = 100 * (1 - np.exp(-t / tau))

# Create figure
plt.figure(figsize=(9, 5))
plt.plot(
    t,
    v_out,
    color="#1f77b4",
    linewidth=2.5,
    label=r"$V_{out}(t) = V_0(1 - e^{-t/\tau})$",
)

# Highlight key points on the response curve
plt.scatter([40, 80, 120], [63.2, 86.5, 95.0], color="red", zorder=5, s=50)
plt.axvline(x=120, color="red", linestyle="--", alpha=0.7)
plt.axhline(y=95, color="red", linestyle="--", alpha=0.7)

# Annotations
plt.annotate(
    "Target: 95% Output at t = 120s",
    xy=(120, 95),
    xytext=(125, 80),
    arrowprops=dict(facecolor="black", shrink=0.05, width=1, headwidth=6),
    fontsize=10,
    fontweight="bold",
)

plt.annotate(
    r"1 $\tau$ = 40s (63.2%)",
    xy=(40, 63.2),
    xytext=(45, 50),
    arrowprops=dict(facecolor="black", shrink=0.05, width=1, headwidth=5),
    fontsize=9,
)

# Formatting title, labels, and grid
plt.title(
    r"First-Order Response Curve (Thermometer, $\tau = 40$ s)",
    fontsize=13,
    fontweight="bold",
)
plt.xlabel("Time t (seconds)", fontsize=11)
plt.ylabel(r"Output $V_{out}$ (% of Steady State $V_0$)", fontsize=11)
plt.grid(True, linestyle=":", alpha=0.6)
plt.legend(loc="lower right", fontsize=11)
plt.xlim(0, 200)
plt.ylim(0, 105)

output_path = "first_order_response.png"
plt.savefig(output_path
