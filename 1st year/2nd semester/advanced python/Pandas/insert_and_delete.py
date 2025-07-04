from pandas import *
var=DataFrame({"A":[1,2,3,4,5,6],"B":[10,20,30,40,50,60]})
var.insert(2,"python",var["A"])
print(var)

var=DataFrame({"A":[1,2,3,4,5,6],"B":[10,20,30,40,50,60]})
var.insert(2,"python",var["A"]*var["B"])
print(var)

var=DataFrame({"A":[1,2,3,4,5,6],"B":[10,20,30,40,50,60]})
var.insert(2,"python",[11,22,33,44,55,66])
print(var)

var["python_12"]=var["A"][:2]
print(var)

#var.pop("python_12")
del var["python"]
print(var)