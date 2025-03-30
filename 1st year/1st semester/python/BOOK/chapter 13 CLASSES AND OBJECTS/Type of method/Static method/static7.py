class YearUtils:
    @staticmethod
    def is_leap_year(year):
        return (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0)

print(YearUtils.is_leap_year(2024))  # Output: True
print(YearUtils.is_leap_year(2023))  # Output: False
