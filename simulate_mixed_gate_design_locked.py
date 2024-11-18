import pyverilator
import pandas as pd

# Load the locked Verilog module
sim = pyverilator.PyVerilator.build('mixed_gate_design_locked.v')

def set_key(sim, key_bits):
    sim.io.keyinput0 = (key_bits >> 0) & 1
    sim.io.keyinput1 = (key_bits >> 1) & 1
    sim.io.keyinput2 = (key_bits >> 2) & 1
    sim.io.keyinput3 = (key_bits >> 3) & 1
    sim.io.keyinput4 = (key_bits >> 4) & 1
    sim.io.keyinput5 = (key_bits >> 5) & 1
    sim.io.keyinput6 = (key_bits >> 6) & 1

# Your key is '0110101' which is binary for 53
key_val = 0b0110101
set_key(sim, key_val)

results = []
for in_val in range(16):
    # Set the inputs
    sim.io.I4 = (in_val >> 3) & 1
    sim.io.I3 = (in_val >> 2) & 1
    sim.io.I2 = (in_val >> 1) & 1
    sim.io.I1 = (in_val >> 0) & 1

    # Evaluate the simulation
    sim.eval()

    # Collect the output as integers
    results.append({
        'I4I3I2I1': f"{(in_val >> 3) & 1} {(in_val >> 2) & 1} {(in_val >> 1) & 1} {(in_val >> 0) & 1}",
        'Key': f"{(key_val >> 6) & 1} {(key_val >> 5) & 1} {(key_val >> 4) & 1} {(key_val >> 3) & 1} {(key_val >> 2) & 1} {(key_val >> 1) & 1} {(key_val >> 0) & 1}",
        'O3O2O1': f"{int(sim.io.O3)} {int(sim.io.O2)} {int(sim.io.O1)}"
    })

# Convert results to a DataFrame
df = pd.DataFrame(results)
# Save to CSV without extra spaces
df.to_csv('results_locked.csv', index=False)

print("Locked netlist simulation results saved to results_locked.csv")
