#set = collection which is unordered,unidexed. 
#   no duplicate values
utensils ={"fork","spoon","knife","knife","spoon"}
dishes={"bowl","plate","cup"}
# utensils.add("nampkin")
# utensils.discard("fork")
# utensils.remove("spoon")
# utensils.update(dishes)
# utensils.remove("bowl")
dinner_table=utensils.union(dishes)
print(dinner_table.difference(utensils))
print(dinner_table.intersection(dishes))
for x in dinner_table:
    print(x)