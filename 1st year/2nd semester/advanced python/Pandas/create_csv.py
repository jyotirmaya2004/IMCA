import pandas as pd
dis={1:[1,2,3,4,5,6,7],2:[11,22,33,44,55,66,77]}
var=pd.DataFrame(dis)
print(var)
var.to_csv("test_new.csv")
#for removing index number from csv file
var.to_csv("test_new1.csv",index=False)
#for changing header name
var.to_csv("test_new2.csv",index=False,header=["Roll no","Attendece"])