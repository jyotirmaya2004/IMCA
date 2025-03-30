import argparse

parser = argparse.ArgumentParser(description="Process some numbers.")
parser.add_argument("num1", type=int, help="First number")
parser.add_argument("num2", type=int, help="Second number")
args = parser.parse_args()

print(f"Sum: {args.num1 + args.num2}")
