import argparse

parser = argparse.ArgumentParser(description="Example of optional arguments")
parser.add_argument("-n", "--name", type=str, help="Your name")
args = parser.parse_args()

if args.name:
    print(f"Hello, {args.name}!")
else:
    print("Hello, User!")
