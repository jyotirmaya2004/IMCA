import functools
from datetime import datetime

# Define the list of transactions
transactions = [
    {"date": "2022-01-01", "description": "Rent", "debit": 1000, "credit": 0},
    {"date": "2022-01-05", "description": "Groceries", "debit": 500, "credit": 0},
    {"date": "2022-01-10", "description": "Paycheck", "debit": 0, "credit": 2000},
    {"date": "2022-02-01", "description": "Rent", "debit": 1000, "credit": 0},
    {"date": "2022-02-15", "description": "Utilities", "debit": 150, "credit": 0},
    {"date": "2022-03-01", "description": "Rent", "debit": 1000, "credit": 0},
    {"date": "2022-03-20", "description": "Car payment", "debit": 500, "credit": 0},
]

# Define a function to extract the month from a transaction date
def extract_month(transaction):
    date = datetime.strptime(transaction["date"], "%Y-%m-%d")
    return date.month

# Define a function to calculate the total debit and credit amounts for a month
def calculate_monthly_totals(transactions):
    monthly_totals = {}
    for transaction in transactions:
        month = extract_month(transaction)
        if month not in monthly_totals:
            monthly_totals[month] = {"debit": 0, "credit": 0}
        monthly_totals[month]["debit"] += transaction["debit"]
        monthly_totals[month]["credit"] += transaction["credit"]
    return monthly_totals

# Define a function to calculate the net balance for a month
def calculate_net_balance(monthly_totals):
    net_balances = {}
    for month, totals in monthly_totals.items():
        net_balances[month] = totals["credit"] - totals["debit"]
    return net_balances

# Use reduce() to calculate the total debit and credit amounts for each month
monthly_totals = functools.reduce(
    lambda totals, transaction: {
        **totals,
        extract_month(transaction): {
            "debit": totals.get(extract_month(transaction), {}).get("debit", 0) + transaction["debit"],
            "credit": totals.get(extract_month(transaction), {}).get("credit", 0) + transaction["credit"],
        }
    },
    transactions,
    {}
)

# Use reduce() to calculate the net balance for each month
net_balances = functools.reduce(
    lambda balances, totals: {
        **balances,
        totals[0]: totals[1]["credit"] - totals[1]["debit"],
    },
    monthly_totals.items(),
    {}
)

# Print the results
print("Monthly Totals:")
for month, totals in monthly_totals.items():
    print(f"Month: {month}, Debit: {totals['debit']}, Credit: {totals['credit']}")

print("\nNet Balances:")
for month, balance in net_balances.items():
    print(f"Month: {month}, Net Balance: {balance}")
