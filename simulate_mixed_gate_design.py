import pyverilator
import pandas as pd

# Loads the given/original Verilog module
sim = pyverilator.PyVerilator.build('mixed_gate_design.v')

results = []
for in_val in range(16):
    # Sets the inputs
    sim.io.I4 = (in_val >> 3) & 1
    sim.io.I3 = (in_val >> 2) & 1
    sim.io.I2 = (in_val >> 1) & 1
    sim.io.I1 = (in_val >> 0) & 1

    # Evaluate the simulation
    sim.eval()

    # Collects the output as integers
    results.append({
        'I4I3I2I1': f"{(in_val >> 3) & 1} {(in_val >> 2) & 1} {(in_val >> 1) & 1} {(in_val >> 0) & 1}",
        'O3O2O1': f"{int(sim.io.O3)} {int(sim.io.O2)} {int(sim.io.O1)}"
    })

# Converts results to a DataFrame
df = pd.DataFrame(results)
# Saves to CSV without extra spaces
df.to_csv('results_original.csv', index=False)

print("Original netlist simulation results saved to results_original.csv")
