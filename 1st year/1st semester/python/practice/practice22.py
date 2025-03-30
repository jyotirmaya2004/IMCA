class Time:
    def __init__(self):
        self.h = int(input("Enter hours: "))
        self.m = int(input("Enter minutes: "))
        self.s = int(input("Enter seconds: "))

    def __add__(self, other):
        s = self.s + other.s
        m = self.m + other.m + (s // 60)  # Add carry from seconds
        s = s % 60
        h = self.h + other.h + (m // 60)  # Add carry from minutes
        m = m % 60
        return Time.from_values(h, m, s)

    @staticmethod
    def from_values(h, m, s):
        time_obj = Time.__new__(Time)  # Create instance without calling __init__
        time_obj.h, time_obj.m, time_obj.s = h, m, s
        return time_obj

    def display(self):
        print(f"Hour : Minute : Second = {self.h} : {self.m} : {self.s}")


print("\nEnter 1st time \n")
t1 = Time()
print("\nEnter 2nd time\n")
t2 = Time()

result = t1 + t2  # Uses __add__ method
print("\nSum of times:")
result.display()
