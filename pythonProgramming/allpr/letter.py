letter = '''Dear <|NAME|>,
Greetings from ABC coding house. I am happy to tall you about your selected
You are selected!
Have a great day ahead!
Thanks and regards,
Bill
Date: <|DATE|>
 '''
name = input("Enter your Name:\n")
date = input("Enter Date:\n")
letter = letter.replace("<|NAME|>",name)
letter = letter.replace("<|DATE|>",date)
print(letter)
