import pandas as pd
dataset = {
	'Name': ['Alice', 'Bob', 'Charlie'],
	'Age': [25, 30, 35],
	'Salary': [50000, 60000, 70000],}
dframe = pd.DataFrame(dataset)
print("Orginal dataframe : \n",dframe)
#column selection
name_value=dframe['Name']
print("Selected num value : \n",name_value)
#how to select morethan one column
column=dframe[['Name','Age']]
print("Multiple column values : \n",column)
#add a column in the data frame
dframe['Country']='India'
print("dataframe after adding new frame : ",dframe)
#add a new column refering to the existing column
dframe['Age_new']=dframe['Age']+10
print("New dataframe after adding new column : \n",dframe)
#delete a column
newdframe=dframe.drop('Age',axis=1)
print("After deleting dataframe : \n",newdframe)
#delete multiple column
dframe.drop(['Salary','Country'],axis=1)
print("After deleting dataframe : \n",dframe)