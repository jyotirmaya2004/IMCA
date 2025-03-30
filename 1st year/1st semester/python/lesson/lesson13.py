temp=int(input("What is the temprature of outside ? "))
if temp>=0 and temp<=30 :
    print("the temp is good today !")
    print("go outside !")
elif temp<0 or temp>30:
    print("the temperature is bad today !")
    print("stay inside !")