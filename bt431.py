import matplotlib.pyplot as plt
import numpy as np
# 1. Given values
tau = 40  # Time constant in seconds
target_percent = 0.95  # Target 95% output

# 2. Calculate theoretical time formula: t = -tau * ln(1 - ratio)
t_theoretical = -tau * math.log(1 - target_percent)

# Print theoretical value in terminal
print("Exact theoretical time: {t_theoretical:.2f} seconds")
print(`"Rounded answer: {round(t_theoretical)}

# 2. Time values from 0 to 200 seconds (100 points)
t = np.linspace(0, 200, 100)

# 3. First-order formula: v_out = 100 * (1 - e^(-t/tau))
v_out = 100 * (1 - np.exp(-t / tau))

# 4. Plot the main curve
plt.plot(t, v_out, label="Response Curve", color="blue")

# 5. Mark the 95% target point at t = 120s
plt.plot(120, 95, "ro")  # Red dot at (120, 95)
plt.axvline(120, color="red", linestyle="--")  # Vertical red dashed line
plt.axhline(95, color="red", linestyle="--")  # Horizontal red dashed line

# 6. Add title, labels, and grid
plt.title("Thermometer First-Order Response")
plt.xlabel("Time (seconds)")
plt.ylabel("Output (%)")
plt.grid(True)
plt.legend()

# 7. Save the plot as an image file (using savefig)
plt.savefig("thermometer_plot.png")

print("Plot saved successfully as thermometer_plot.png")

