class Father:
    def show(self):
        print("Father's Show Method")

class Mother:
    def show(self):
        print("Mother's Show Method")

class Child(Father, Mother):
    def show(self):
        super().show()  # Calls Father's show() method due to MRO
        Mother.show(self)  # Explicitly calling Mother's show() method

obj = Child()
obj.show()
