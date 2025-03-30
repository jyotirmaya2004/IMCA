import sys

def process_data(data):
    return data.upper()

if __name__ == "__main__":
    if len(sys.argv) > 1:
        print(process_data(sys.argv[1]))
    else:
        print("Usage: python script.py <text>")
