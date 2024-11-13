myDict = {
    "Pankha": "Fan",
    "Dabba": "Box",
    "Vastu": "Item"
}
print("Option are ", myDict.keys())
a = input("Enter the Hindi words\n")
#print("The meaning of your words:",myDict[a])
print("The meaning of your words:",myDict.get(a))




