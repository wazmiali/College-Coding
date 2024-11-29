# Find the and word in a pdf file 
word = input("Enter the letter: ")
with open("Practice.pdf", "r") as f:
      data = f.read()
      if(data.find(word) != -1):
            print("Found")
      else:
            print("Not found")

# def check_for_word():
#       word = input("Enter the letter: ")
#       with open("Practice.pdf", "r") as f:
#             data = f.read()
#             if(data.find(word) != -1):
#                   print("Found")
#             else:
#                   print("Not found")

# check_for_word()


# Read line by line the content in file 

# def check_for_line():
#       word = "programmer"
#       data = True
#       line_no = 1
#       with open("Practice.pdf", "r") as f:
#             while data:
#                   data = f.readline()
#                   if(word in data):
#                         print(line_no)
#                         return
#                   line_no += 1

#       return -1

# check_for_line()
