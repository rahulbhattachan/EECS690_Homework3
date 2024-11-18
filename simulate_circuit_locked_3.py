import pyverilator
import pandas as pd

# Load the Verilog module (adjust the path to your Verilog file)
sim = pyverilator.PyVerilator.build('circuit_locked_3.v')

def set_bus(sim, prefix, value, width=4):
    for i in range(width):
        setattr(sim.io, f"{prefix}{i}", (value >> i) & 1)

key_val = 0b111
#key_val = 0b0100101
#key_val = 0b0101100

results = []
for in_val in range(16):
    # Set the inputs directly
    sim.io.I4 = (in_val >> 3) & 1
    sim.io.I3 = (in_val >> 2) & 1
    sim.io.I2 = (in_val >> 1) & 1
    sim.io.I1 = (in_val >> 0) & 1
    ######## Applying Key  ##########
    set_bus(sim, 'keyinput', key_val, 3)  # Sets K0, K1, K2, K3 to 0110


    # Collect the output directly, as `evaluate()` might not be needed
    results.append({
        #'I': f"{in_val:04b}", # I3_I2_I1_I0
        #'OUT': f"{sim.io.OUT:03b}"  # Access output directly as O2_O1_O0
        'I4I3I2I1': f"{(in_val >> 3) & 1}"+f" {(in_val >> 2) & 1}"+f" {(in_val >> 1) & 1}"+f" {(in_val >> 0) & 1}",
        '   KEY': f"   {key_val:03b}",
        '   O3O2O1': f"     {sim.io.O3:01b}"+f" {sim.io.O2:01b}"+f" {sim.io.O1:01b}"

    })

# Convert results to a DataFrame for better visualization
df = pd.DataFrame(results)
# Save the DataFrame to a CSV file
df.to_csv('results.csv', index=False)

print("Results saved to results.csv")
