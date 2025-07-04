from pandas import *
var=DataFrame({"A":[11,22,33,44,55,66],"B":[80,34,86,97,45,67]})
print(var)

#addition
print("Addition")
var["c"]=var["A"]+var["B"]
print(var)

#substraction
print("Substraction")
var["c"]=var["A"]-var["B"]
print(var)

#Multiplication
print("Multiplication")
var["c"]=var["A"]*var["B"]
print(var)

#division
print("Division")
var["c"]=var["B"]/var["A"]
print(var)

#logical condition
print("Result")
var["Pass"]=var["B"]>=50
print(var)