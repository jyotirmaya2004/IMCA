class Counter:
    def __init__(self):
        self.count = 0

    def increment(self):
        self.count += 1

c = Counter()
for _ in range(5):
    c.increment()

print(c.count)  # Output: 5
