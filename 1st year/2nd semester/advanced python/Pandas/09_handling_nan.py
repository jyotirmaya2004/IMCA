
import pandas as pd
import numpy as np

df = pd.DataFrame({'A': [1, np.nan, 3], 'B': [4, 5, np.nan]})
print(df.isnull())
print(df.fillna(0))
