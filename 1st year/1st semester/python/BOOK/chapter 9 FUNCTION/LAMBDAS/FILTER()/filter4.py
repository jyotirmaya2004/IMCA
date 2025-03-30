def is_even(x):
    if x%2==0:
        return True
    else:
        return False
    
lat=[21,23,43,54,34,123,43542,53,1,5323,5462]
list1=list(filter(is_even,lat))
print(list1)