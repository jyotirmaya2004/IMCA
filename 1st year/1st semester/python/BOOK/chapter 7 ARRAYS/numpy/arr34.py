from numpy import *
m=matrix('1,2,3;4,5,6;7,8,9')
print("The original matrix is :\n",m)
#transpose of matrix
t=m.T
print("The transpose of matrix is :\n",t)
t1=t.getT()
print("The transpose of matrix is :\n",t1)