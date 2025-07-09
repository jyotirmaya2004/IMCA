import pandas as pd
dataset = {
	'Name': ['Alice', 'Bob', 'Charlie'],
	'Age': [25, 30, 35],
	'Salary': [50000, 60000, 70000],}
dframe = pd.DataFrame(dataset)
print("Orginal dataframe : \n",dframe)
#select single row label wise
print("Selected row : \n",dframe.loc[1])
#select single row position wise
print("Selected row : \n",dframe.loc[0])
#select multiple rows
print("Selected multiple row : \n",dframe.loc[[0,2]])
#select row based on condition
#Add a row
dframe.loc[4]=['LEMON',39,'80000']
print("New dataframe : ",dframe)
#delete a row
dframe= dframe.drop(index=0)
print("Delete data with label 0 : ",dframe)