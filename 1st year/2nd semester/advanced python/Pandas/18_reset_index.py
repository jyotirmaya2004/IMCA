
import pandas as pd

df = pd.DataFrame({'A': [1, 2, 3]}, index=['x', 'y', 'z'])
df = df.reset_index()
print(df)
