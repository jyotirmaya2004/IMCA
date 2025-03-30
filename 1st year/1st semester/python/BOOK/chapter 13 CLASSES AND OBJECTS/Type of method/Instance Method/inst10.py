class Library:
    def __init__(self):
        self.books = ["Python Basics", "Machine Learning", "Data Science"]

    def borrow_book(self, book_name):
        if book_name in self.books:
            self.books.remove(book_name)
            return f"You borrowed '{book_name}'"
        else:
            return "Book not available"

library = Library()
print(library.borrow_book("Python Basics"))  # Output: You borrowed 'Python Basics'
print(library.books)  # Output: ['Machine Learning', 'Data Science']
