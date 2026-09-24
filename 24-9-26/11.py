#code by Sara
#date: 24-9-26
import numpy as np

# Define matrix P
P = np.array([
    [1, 0, 1],
    [0, 1, 0],
    [1, 0, 1]
], dtype=float)

# Compute trace and eigenvalues
trace_P = np.trace(P)
eigenvalues = np.linalg.eigvals(P)

# --- OPTION A VERIFICATION ---
sum_eigenvalues = np.sum(eigenvalues)
is_option_A = np.isclose(trace_P, sum_eigenvalues)

# --- OPTION B VERIFICATION ---
PtP = P.T @ P
is_option_B = np.allclose(PtP, np.eye(3))

# --- OPTION C VERIFICATION ---
is_option_C = np.allclose(P.T, -P)

# --- OPTION D VERIFICATION ---
abs_eigenvalues = np.abs(eigenvalues)
is_option_D = np.allclose(abs_eigenvalues, 1.0)

# Print Summary
print(f"Option (A) [Trace == Sum of Eigenvalues]: {is_option_A}")
print(f"Option (B) [P^T * P == Identity]:          {is_option_B}")
print(f"Option (C) [P^T == -P]:                    {is_option_C}")
print(f"Option (D) [|Eigenvalues| == 1]:           {is_option_D}")

print("\n--- Output Details ---")
print(f"Trace(P): {trace_P}")
print(f"Eigenvalues: {eigenvalues}")
print(f"P^T*P:\n{PtP}")
