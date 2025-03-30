class Book:
    book_count = 0  # Class variable to keep track of books

    def __init__(self, title, author):
        self.title = title
        self.author = author
        Book.book_count += 1  # Increment count

    @staticmethod
    def total_books():
        return f"Total books created: {Book.book_count}"

b1 = Book("1984", "George Orwell")
b2 = Book("Brave New World", "Aldous Huxley")

print(Book.total_books())  # Output: 2
