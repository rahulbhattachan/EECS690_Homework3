import pandas as pd

# Load the original and locked simulation results
df_original = pd.read_csv('results_original.csv')
df_locked = pd.read_csv('results_locked.csv')

# Strip whitespace from column names
df_original.columns = df_original.columns.str.strip()
df_locked.columns = df_locked.columns.str.strip()

# Merge the DataFrames on the input columns
comparison = df_original.merge(df_locked, on='I4I3I2I1', suffixes=('_original', '_locked'))

# Check if outputs match
comparison['Outputs_Match'] = comparison['O3O2O1_original'] == comparison['O3O2O1_locked']

# Display the comparison
print(comparison[['I4I3I2I1', 'O3O2O1_original', 'O3O2O1_locked', 'Outputs_Match']])
