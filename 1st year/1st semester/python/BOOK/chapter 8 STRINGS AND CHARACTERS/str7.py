#formating hexadecimal and octal number in string
num=500
print("Decimal number is: ",num)
print("Binary number is: ",bin(num))
print("Octal number is: ",oct(num))
print("Hexadecimal number is: ",hex(num))
print("Binary number is: ",format(num,"b"))
print("Octal number is: ",format(num,"o"))
print("Hexadecimal number is: ",format(num,"x"))

print("{:*^20s}".format("Hello"))
print("{:*>20s}".format("Hello"))
print("{:*<20s}".format("Hello"))
print("{:*^20d}".format(12))
print("{:*>20d}".format(12))
print("{:*<20d}".format(12))
print("{:*^20f}".format(12.3456))
print("{:*>20f}".format(12.3456))
print("{:*<20f}".format(12.3456))
print("{:*^20.2f}".format(12.3456))
print("{:*>20.2f}".format(12.3456))
print("{:*<20.2f}".format(12.3456))

print("Hexadecimal={:.>20x}\nbinary={:.<15b}".format(500,500))