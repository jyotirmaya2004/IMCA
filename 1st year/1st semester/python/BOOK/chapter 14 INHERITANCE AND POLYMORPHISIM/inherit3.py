#base class constructer is available to sub class
class Father:
    def __init__(self):
        self.property=8000000

    def display_property(self):
        print("Father\'s property= ",self.property)

class Son(Father):
    pass
    # def __init__(self):
    #     self.property=20000000

    # def display_property(self):
    #     print("Child\'s property= ",self.property)

s=Son()
s.display_property()