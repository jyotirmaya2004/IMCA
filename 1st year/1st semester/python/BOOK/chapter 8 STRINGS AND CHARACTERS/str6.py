#checking starting and ending of the string
s23="Hello World"
print(s23.startswith("Hello"))
print(s23.endswith("World"))

#formating the string
s24="Hello"
s25="World"
s26="{} {}"
print(s26.format(s24,s25))
s27="{1} {0}"
print(s27.format(s24,s25))
s28="{a} {b}"
print(s28.format(a=s24,b=s25))
s29="{a} {b}"
print(s29.format(a=s24,b=s25))
s30="{0:b}"
print(s30.format(12))
s31="{0:e}"
print(s31.format(12))
s32="{0:.2f}"
print(s32.format(12))
s33="{0:.2f}"
print(s33.format(12.3456))
s34="{0:.2f}"
