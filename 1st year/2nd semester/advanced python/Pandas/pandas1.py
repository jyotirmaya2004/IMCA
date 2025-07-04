import pandas as pd
x=[2,24,222,23]
a=pd.Series(x)
print(a)
print(type(a))
print(a[2])

y=['y','e','r','t']
a=pd.Series(y,index=['I','II','III','Iv'],name='character',dtype='string')
print(a)

#dictionary to series
dic={"\'name\'":["Python","c","c++","Java"],"pos":[1,4,3,2],"no":[231,34323,345,634,63465]}
b=pd.Series(dic)
print(b)

#use range
x=[2,24,222,23]
a=pd.Series(x,index=range(1,100))
print(a)

