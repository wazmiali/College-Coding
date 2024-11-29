# Nested dictionary
student = {
      "name" : "Rahul Kumar",
      "subjects" : {
            "phy" : 97,
            "chem" : 98,
            "math" : 95

      }
}
# print(student["subjects"]["chem"])
# You print only a keys to use the keys() function
# print(student.keys())
#find the length of dictionary 
# print(len(list(student.keys())))

# To print the data in pairs form like a name and student data
# pairs = list(student.items())
# print(pairs[0])

# Update method are use in a dictionary 
new_dict = {"name"}
student.update(new_dict)
print(student)

