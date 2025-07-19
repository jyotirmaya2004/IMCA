import pandas as pd

calories = {"day1": 420, "day2": 380, "day3": 390}

myvar = pd.Series(calories)

print(myvar)

calories = {"day1": 420, "day2": 380, "day3": 390}

myvar = pd.Series(calories, index = ["day1", "day2"])

print(myvar)
df = pd.read_csv('E:\\IMCA\\1st year\\2nd semester\\advanced python\\Pandas\\test_new.csv')
print("\nhead",df.head(1))
print("\ntail",df.tail())
print(df.info())