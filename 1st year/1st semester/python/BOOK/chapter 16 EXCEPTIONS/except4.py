import sys

def trigger_exceptions():
    exceptions = [
        (ZeroDivisionError, lambda: 1 / 0),  # 1. Division by zero
        (OverflowError, lambda: sys.float_info.max * 1e308),  # 2. Too large number
        (IndexError, lambda: [1, 2, 3][10]),  # 3. List index out of range
        (KeyError, lambda: {"a": 1}["b"]),  # 4. Accessing missing dictionary key
        (FileNotFoundError, lambda: open("nonexistent.txt")),  # 5. Opening a non-existing file
        (PermissionError, lambda: open("/root/secret.txt", "w")),  # 6. No permission to access
        (TypeError, lambda: "hello" + 5),  # 7. Invalid operation on different types
        (ValueError, lambda: int("hello")),  # 8. Invalid literal conversion
        (AttributeError, lambda: None.some_method()),  # 9. Accessing non-existing attribute
        (AssertionError, lambda: (_ for _ in ()).throw(AssertionError("Assertion failed!"))),  # 10. Assertion failure
        (NameError, lambda: exec("non_existing_var")),  # 11. Variable not defined
        (UnboundLocalError, lambda: (lambda: (x := 10))()),  # 12. Unbound local variable
        (IndentationError, lambda: exec("def f():\nprint('wrong')")),  # 13. Incorrect indentation
        (SyntaxError, lambda: exec("if True print('error')")),  # 14. Invalid syntax
        (RuntimeError, lambda: sys.setrecursionlimit(10) or trigger_exceptions()),  # 15. Recursion limit
        (RecursionError, lambda: (lambda f: f(f))(lambda f: f(f))),  # 16. Infinite recursion
        (MemoryError, lambda: [1] * (10**10)),  # 17. Running out of memory
        (FloatingPointError, lambda: sys.float_info.max * 2),  # 18. Floating-point precision error
        (StopIteration, lambda: next(iter([]))),  # 19. Iterating past end of iterator
        (GeneratorExit, lambda: (lambda g: (g.close(), next(g)))(iter([]))),  # 20. Generator closed
        (NotImplementedError, lambda: (_ for _ in ()).throw(NotImplementedError())),  # 21. Placeholder function
        (OSError, lambda: open("/invalid/path", "r")),  # 22. OS-related error
        (IsADirectoryError, lambda: open("/home", "r")),  # 23. Trying to open a directory as a file
        (EOFError, lambda: input()),  # 24. Reaching EOF when input() is expected
    ]

    for ex, func in exceptions:
        try:
            func()
        except Exception as e:
            print(f"Caught {type(e).__name__}: {e}")

trigger_exceptions()
