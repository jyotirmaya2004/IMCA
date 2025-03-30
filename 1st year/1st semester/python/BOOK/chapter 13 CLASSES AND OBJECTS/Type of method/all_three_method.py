class Demo:
    class_variable = "I am a class variable"

    def __init__(self, instance_variable):
        self.instance_variable = instance_variable

    def instance_method(self):
        """Instance Method - Works with instance attributes"""
        return f"Instance Method: {self.instance_variable}"

    @classmethod
    def class_method(cls):
        """Class Method - Works with class attributes"""
        return f"Class Method: {cls.class_variable}"

    @staticmethod
    def static_method():
        """Static Method - Does not use instance or class attributes"""
        return "Static Method: This method does not depend on instance or class"

# Creating an object
obj = Demo("I am an instance variable")

# Calling instance method
print(obj.instance_method())  # Output: Instance Method: I am an instance variable

# Calling class method
print(Demo.class_method())    # Output: Class Method: I am a class variable

# Calling static method
print(Demo.static_method())   # Output: Static Method: This method does not depend on instance or class
