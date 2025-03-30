"""Taking Input in a Loop
For continuous input until the user stops:"""

while True:
    user_input = input("Enter something (or type 'exit' to stop): ")
    if user_input.lower() == 'exit':
        break
    print("You entered:", user_input)
"""✅ Example:

bash
Copy
Edit
Enter something (or type 'exit' to stop): Hello
You entered: Hello
Enter something (or type 'exit' to stop): exit"""