def dispaly(str):
    def message():
        return "How are you ?"
    return "Hi "+str+"\n"+message()
x=dispaly(input("Enter your name : "))
print(f"{x}\nWelcome to python programming")