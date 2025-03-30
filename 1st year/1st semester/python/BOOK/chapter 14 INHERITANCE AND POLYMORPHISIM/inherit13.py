class A:
    def show(self):
        return "A"

class B(A):
    def show(self):
        return "B"  # Overriding A

class C(A):
    def show(self):
        return "C"  # Overriding A

class D(B, C):  # Multiple Inheritance
    pass

d = D()
print(d.show())      # Output: B
print(D.mro())       # Output: [D, B, C, A, object]
