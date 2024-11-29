# WAP to enter marks of 3 subject from the user and store them in a dictionary start with an empty dictionary & add by user use subject name as key & marks as value.

marks = {}

x = int(input("Enter marks phy :"))
marks.update({"phy" :x})

x = int(input("Enter marks maths :"))
marks.update({"maths" :x})

x = int(input("Enter marks chem :"))
marks.update({"chem" :x})

print(marks)