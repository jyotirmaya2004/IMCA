class MyClass:
    count = 0

    @classmethod
    def increment(cls):
        cls.count += 1
        print(f"Count is now {cls.count}")

MyClass.increment()  # Class method call
