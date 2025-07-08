import pandas as pd

# Read a CSV file
try:
	df = pd.read_csv('E:\\IMCA\\1st year\\2nd semester\\advanced python\\Pandas\\New_csv.csv')
	print(df.head())
except FileNotFoundError:
	print("Error: 'New_csv.csv' file not found.")
except Exception as e:
	print(f"An error occurred: {e}")