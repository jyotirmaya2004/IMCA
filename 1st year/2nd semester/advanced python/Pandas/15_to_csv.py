
import pandas as pd

df = pd.DataFrame({'Name': ['Alice', 'Bob'], 'Age': [25, 30]})
df.to_csv('output.csv', index=False)
print("CSV file 'output.csv' created.")
