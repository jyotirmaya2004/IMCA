def print_it(**args):
    for name,value in args.items():
        print(name,value,end=" ")
dct={"name":'JB','Age':35}
print_it(**dct)