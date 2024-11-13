myDict = {
    "Fast": "In a Quick Mannar",
    "Harry":"A coder",
    "Marks":[1, 2, 3],
    "anotherdict":{'harry': 'Player'}
}
#Dictionary method
print(list(myDict.keys()))#Print the keys of the dictionary 
print(list(myDict.values()))#Print the keys of the dictionary
print(myDict.items())#Print the (keys, values)for all contents of the dictionary
print(myDict)
updateDict = {
    "Lovish": "Friend",
    "Divya": "Friend",
    "shubham": "Friend",
    "Harry": "Danser"
}
myDict.update(updateDict) #Update the dictionary by adding key value pair from updateDict
print(myDict)

print(myDict.get("Harry")) #this method are use to find the word (get)

