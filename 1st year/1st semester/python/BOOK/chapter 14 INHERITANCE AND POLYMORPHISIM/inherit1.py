from teacher import Teacher
#create instance
t=Teacher()
#store data into instances
t.setid(10)
t.setname("Jyotirmaya Behera")
t.setaddress("Chakarjuni, Beldandia, Singla, Baleswar")
t.setsalary(25999.80)

#retrieve data from instance and display
print("id= ",t.getid())
print("name= ",t.getname())
print("Address= ",t.getaddress())
print("Salary= %.2f"%t.getsalary())
