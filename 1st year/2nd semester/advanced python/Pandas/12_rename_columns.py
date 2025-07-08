
import pandas as pd

df = pd.DataFrame({'A': [1, 2], 'B': [3, 4]})
df = df.rename(columns={'A': 'Alpha', 'B': 'Beta'})
print(df)
