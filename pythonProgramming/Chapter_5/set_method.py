# Creating an empty set 
b = set()
print(type(b))

#Adding value to an empty set
b.add(4)
b.add(5)
b.add(5) # Adding a value repeated dose not change a set
b.add((4,5,6))
print(b)

#  Accessing Elements
#b.add({4:5}) # Cannot add list or dictionary to sets
print(b)

#Length of the set
print(len(b)) #print the length of this set

# Removal of an Item
b.remove(5) # Removes 5 from set b 
print(b)

print(b.pop())
print(b)



