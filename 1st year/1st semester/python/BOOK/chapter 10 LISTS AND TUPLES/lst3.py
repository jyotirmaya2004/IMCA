#Concatenation of two lists
x=[20.30,40,50,60]
y=[34,54,65,76]
print(x+y)

#repetition in list
print(x*3)

#membership in lists
a=40
print(a in x)
print(a not in x)

#Aliasing 
m=[10,20,30,40]
n=m
print(m)
print(n)

m[1]=99
print(m)
print(n)

#cloning lists
p=[1,2,3,4,5]
q=p[:]
print(p)
print(q)

p[1]=23
print(p)
print(q)

#copy
x=[1,2,3,4,5]
y=x.copy()
print(x)
print(y)

x[1]=99
print(x)
print(y)

