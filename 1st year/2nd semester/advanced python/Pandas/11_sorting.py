
import pandas as pd

df = pd.DataFrame({'Name': ['Bob', 'Alice'], 'Age': [30, 25]})
print(df.sort_values(by='Age'))
