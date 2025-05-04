"""
properties of oops
🔹 1. Encapsulation
Definition: Encapsulation is the process of binding data (variables) and methods (functions) into a single unit, i.e., a class. It hides the internal details of an object from the outside world and protects object integrity by restricting access to internal data.

In Python:

Achieved using private variables (__variable) and getter/setter methods.

Improves security and modularity.

Example Use: A BankAccount class where the balance is private and modified only via deposit/withdraw methods.

🔹 2. Abstraction
Definition: Abstraction means showing only the essential features of an object and hiding the unnecessary details. It helps reduce complexity.

In Python:

Implemented using abstract classes and methods from the abc module.

Only essential functions are visible to users; complex implementation remains hidden.

Example Use: A Shape base class with an abstract method area(), which is implemented differently in Circle, Square, etc.

🔹 3. Inheritance
Definition: Inheritance allows a class (child/subclass) to inherit properties and behaviors (methods) from another class (parent/superclass). It promotes code reuse and establishes relationships between classes.

Types of inheritance in Python:

	a->Single

	b->Multiple

	c->Multilevel

	d->Hierarchical

	e->Hybrid

Example Use: A Dog class inherits from Animal and reuses the common behavior (like sound() method).

🔹 4. Polymorphism
Definition: Polymorphism means "many forms". It allows methods to behave differently based on the object calling them.

In Python:

	a->Method Overriding (Run-time Polymorphism): Subclass redefines a   method of the parent class.

	b->Default Arguments (like Method Overloading): Python doesn't support traditional overloading but can simulate it.

Example Use: A Bird class and Ostrich subclass both have a fly() method but behave differently.

🔹 5. Class and Object
Class is a blueprint for creating objects. It defines properties (variables) and behaviors (methods).

Object is an instance of a class.

In Python: You define a class using class keyword and create objects using the class name like obj = ClassName().

"""