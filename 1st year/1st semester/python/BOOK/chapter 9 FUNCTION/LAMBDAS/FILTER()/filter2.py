books = [
    {"title": "Book 1", "author": "Author 1", "year": 1999},
    {"title": "Book 2", "author": "Author 2", "year": 2001},
    {"title": "Book 3", "author": "Author 3", "year": 2010},
    {"title": "Book 4", "author": "Author 4", "year": 1995},
    {"title": "Book 5", "author": "Author 5", "year": 2005}
]

recent_books = list(filter(
    lambda book: book["year"] > 2000,
    books
))

recent_titles = list(map(
    lambda book: book["title"],
    recent_books
))

print(recent_titles)
