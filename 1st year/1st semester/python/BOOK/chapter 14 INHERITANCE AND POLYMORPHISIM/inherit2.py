from teacher import Teacher
class Student(Teacher):
    def setmarks(self,marks):
        self.marks=marks
    def getmarks(self):
        return self.marks

#create instance
s=Student()
#store data into instances
s.setid(10)
s.setname("Jyotirmaya Behera")
s.setaddress("Chakarjuni, Beldandia, Singla, Baleswar")
s.setmarks(99.80)

#retrieve data from instance and display
print("id= ",s.getid())
print("name= ",s.getname())
print("Address= ",s.getaddress())
print("Marks= ",s.getmarks())
