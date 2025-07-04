import pandas as pd
x=[2,3,4,2,4]
var=pd.DataFrame(x)
print(var)

y={"a":[2,3,1,3,1],"b":[3,2,4,24,3]}
var1=pd.DataFrame(y)
print(var1)
print(type(var1))

#print using column
y={"a":[2,3,1,3,1],"b":[3,2,4,24,3]}
var1=pd.DataFrame(y,columns=["a"])
print(var1)
print(type(var1))

#print using index
y={"a":[2,3,1,3,1],"b":[3,2,4,24,3]}
var1=pd.DataFrame(y,index=["a","b","c","d","e"])
print(var1)
print(type(var1))

#print list
z=[[1,2,3,4,5],[6,7,8,9,10]]
var=pd.DataFrame(z)
print(var)

#print series
sr={"Roll no":pd.Series([1,2,3,4,5,6]),"Mark":pd.Series([11,22,33,44,55,66])}
var=pd.DataFrame(sr)
print(var)