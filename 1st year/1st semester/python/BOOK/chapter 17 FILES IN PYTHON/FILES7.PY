#with statement
with open("sample.txt","w") as f:
    f.write("I am learner\n")
    f.write("Python is attractive\n")
with open("sample.txt","r") as f :
    for i in f:
        print(i)

"""The adcantages of with statement is that it will take care of closing a file which open by it"""
