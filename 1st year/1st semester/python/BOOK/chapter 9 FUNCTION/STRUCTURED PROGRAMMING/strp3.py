class Library:
    def __init__(self):
        self.books = {}

    def add_book(self, book_id, title):
        self.books[book_id] = {"title": title, "available": True}
        print(f"Book '{title}' added!")

    def borrow_book(self, book_id):
        if book_id in self.books and self.books[book_id]["available"]:
            self.books[book_id]["available"] = False
            print(f"Book '{self.books[book_id]['title']}' borrowed.")
        else:
            print("Book is unavailable or doesn't exist!")

    def return_book(self, book_id):
        if book_id in self.books:
            self.books[book_id]["available"] = True
            print(f"Book '{self.books[book_id]['title']}' returned.")
        else:
            print("Invalid book ID!")

    def display_books(self):
        print("Library Books:")
        for book_id, details in self.books.items():
            status = "Available" if details["available"] else "Borrowed"
            print(f"ID: {book_id}, Title: {details['title']}, Status: {status}")

# Library operations
library = Library()
library.add_book(101, "Python Basics")
library.add_book(102, "Machine Learning")
library.display_books()

library.borrow_book(101)
library.display_books()

library.return_book(101)
library.display_books()
