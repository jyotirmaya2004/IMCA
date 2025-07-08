
import pandas as pd

df = pd.DataFrame({'Name': ['Alice', 'Bob'], 'ID': [1, 2]})
df = df.set_index('ID')
print(df)
