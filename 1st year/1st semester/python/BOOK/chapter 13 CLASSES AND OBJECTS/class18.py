class Person:
    def __init__(self, name, ssn):
        self.name = name
        self.__ssn = ssn  # Private attribute

    def get_ssn(self):
        return f"SSN: {self.__ssn[-4:]}"  # Only show last 4 digits

    def set_ssn(self, new_ssn):
        if len(new_ssn) == 9 and new_ssn.isdigit():
            self.__ssn = new_ssn
        else:
            print("Invalid SSN")

person1 = Person("John", "123456789")
print(person1.get_ssn())  # Output: SSN: 6789
person1.set_ssn("987654321")
print(person1.get_ssn())  # Output: SSN: 4321
