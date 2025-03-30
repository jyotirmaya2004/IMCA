#keyword variable argument
def display(farg,**kwargs):
    print("Formal argunent : ",farg)
    for x,y in kwargs.items():
        print(f"Key = {x} ,value = {y}")
display(5,rno=25)
display("Ram",hari=5)