class File:
    def read(self):
        return "File contents"

class StringIO:
    def read(self):
        return "String contents"

def read_data(source):
    return source.read()

file = File()
string_io = StringIO()

print(read_data(file))  # Output: File contents
print(read_data(string_io))  # Output: String contents
