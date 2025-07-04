import pandas as pd
csv_1=pd.read_csv("E:\\IMCA\\1st year\\2nd semester\\advanced python\\Pandas\\New_csv.csv")
#print(csv_1)

#for read only particular  no of rows
# csv_2=pd.read_csv("E:\\IMCA\\1st year\\2nd semester\\advanced python\\Pandas\\New_csv.csv",nrows=3)
# print(csv_2)

#for read only particular  columns
csv_2=pd.read_csv("E:\\IMCA\\1st year\\2nd semester\\advanced python\\Pandas\\New_csv.csv",usecols=["Name"])
print(csv_2)