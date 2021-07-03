our_list = ["a","b","c",1.5,3+6j]
print(our_list)

our_list.append("d")
print(our_list)
print(our_list[0])

our_list.insert(0,"First letter")
print(our_list)
our_list.remove(3+6j)
print(our_list)

our_list.pop(5)
print(our_list)

nested_list = [[1,2,3],4,5,6]
print(nested_list)
nested_list[0].pop(1) #same for all other functions
print(nested_list)