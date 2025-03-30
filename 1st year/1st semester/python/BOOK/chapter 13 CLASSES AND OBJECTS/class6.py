class Example:
    class_var = "Shared"  # Class variable

    def __init__(self, value):
        self.instance_var = value  # Instance variable

    def method(self):
        local_var = "Temporary"  # Local variable
        print("Instance Variable:", self.instance_var)
        print("Class Variable:", Example.class_var)
        print("Local Variable:", local_var)

# Creating an object
obj = Example("Unique Data")
obj.method()
