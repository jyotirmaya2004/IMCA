from enum import Enum
class Color(Enum):
   red = 1
   green = 2
   blue = 3
list=[c for c in Color]
print(list)