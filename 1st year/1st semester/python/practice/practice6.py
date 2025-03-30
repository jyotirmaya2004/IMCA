#count vowel in a list
str=input("Enter a string : ")
count=0
for i in str:
    if i=='a' or i=='i' or i =='e' or i=='o' or i=='u' or i=='A' or i=='E' or i=='O' or i=='I' or i=='U' :
        count+=1

print("The number of vowel is ",count)