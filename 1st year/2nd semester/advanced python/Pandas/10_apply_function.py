
import pandas as pd

df = pd.DataFrame({'A': [1, 2, 3]})
df['Square'] = df['A'].apply(lambda x: x ** 2)
print(df)
