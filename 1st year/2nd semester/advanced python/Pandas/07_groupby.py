
import pandas as pd

data = {'Department': ['IT', 'HR', 'IT', 'HR'],
        'Salary': [50000, 60000, 55000, 58000]}
df = pd.DataFrame(data)
print(df.groupby('Department')['Salary'].mean())
