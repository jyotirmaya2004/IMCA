class Counter:
    count = 0  # Class variable

    def __init__(self):
        Counter.increment_count()

    @classmethod
    def increment_count(cls):
        cls.count += 1

c1 = Counter()
c2 = Counter()
c3 = Counter()
print(Counter.count)  # Output: 3
