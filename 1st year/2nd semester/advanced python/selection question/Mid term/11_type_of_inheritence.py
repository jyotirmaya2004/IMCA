"""1. Single Inheritance

Involves only two classes: one parent and one child.

The child class inherits the methods and properties of a single parent class.

It helps in code reusability and simplicity.

Example: Student class inherits from Person class.

2. Multiple Inheritance

A child class inherits from more than one parent class.

This allows combining functionalities of multiple classes.

It can lead to complexity and ambiguity, which Python resolves using MRO (Method Resolution Order).

Example: Child class inherits from both Father and Mother.

3. Multilevel Inheritance

Involves a hierarchy of classes, where a child class becomes a parent to another class.

Features and methods are passed down through multiple levels.

Promotes better organization and reusability.

Example: Grandparent → Parent → Child.

4. Hierarchical Inheritance

Multiple child classes inherit from the same parent class.

Common functionalities are defined in the parent class and shared among all child classes.

Promotes code efficiency and reduces redundancy.

Example: Car, Bike, Bus all inherit from Vehicle.

5. Hybrid Inheritance

A combination of two or more types of inheritance.

Introduces complex relationships between classes.

Python uses MRO and the C3 linearization algorithm to resolve conflicts.

Example: D inherits from both B and C, where B inherits from A.

"""