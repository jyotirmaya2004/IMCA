import pandas as pd
import numpy as np
dataset = {
	'Name': ['Alice', 'Bob', 'Charlie'],
	'Age': [25, 30, 35],
	'Salary': [50000, 60000, 70000],}
dframe = pd.DataFrame(dataset)
num_arr=dframe.to_numpy()
print("Numpy array values are : ",num_arr)
sr=pd.Series([10,11,12,13,14])
num_arr=sr.to_numpy()
print("Numpy array of series : ",num_arr)
