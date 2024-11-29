# Tuple in Python
# tup = (2, 1, 3, 1)
# print(tup[0])
# print(tup[1])

# tup = (1)
# print(tup)
# print(type(tup))
  

# tuple = (1, 2, 3, 4)
# print(tuple.index(2))  


# Q1. WAP to ask the user to enter names of their 3 favorit movies & store them in a list.

# movies = []
# movies.append(input("Enter 1st name: "))
# movies.append(input("Enter 2sd name: "))
# movies.append(input("Enter 3rd name: "))

# print(movies)


# Q2. WAP to check if a list contains a palindrome of element (Hint: use copy() method)

# list1 = [1, 2, 1]
# list2 = [1, 2, 3]

# copy_list1 = list1.copy()
# copy_list1.reverse()

# if(copy_list1 == list1):
#       print("Palindrome")
# else:
#       print("NOT palindrome")


# Q3. WAP to count the number of student with the "A" grade in the following tuple.
# ("C ", "D", "A", "A", "B", "B", "A") 
# store the above values in a list & sort then from "A" to "D".

# Count the number of student
# grade = ("C ", "D", "A", "A", "B", "B", "A")
# print(grade.count("A"))


grade = ["C ", "D", "A", "A", "B", "B", "A"]
grade.sort()
print(grade)
