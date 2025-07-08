
import pandas as pd

df = pd.DataFrame({'Name': ['Alice', 'Bob'], 'Age': [25, 30]})
print(df['Name'])  # Select one column
print(df[['Name', 'Age']])  # Select multiple columns
