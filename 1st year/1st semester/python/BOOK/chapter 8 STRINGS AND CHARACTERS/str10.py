#earching for a string in a group of strings
strings = [input(f"Enter string {i+1}: ") for i in range(int(input("Enter the number of strings: ")))]
search_string = input("Enter the string to search for: ")
flag=0
for i in range(len(strings)):
    if strings[i] == search_string:
        print(f"String found at index {i}")
        flag=1
        break
if flag==0:
    print("String not found")
