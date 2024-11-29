# Write  a data in a multiple lines
# with open("Practice.pdf", "w") as f:
#       f.write("Hi everyone \nWe are learning file Input output\n")
#       f.write("using Java.\nlike programmer in java.")


# Data replace and update 
with open("Practice.pdf", "r") as f:
       data = f.read()

new_data = data.replace("Java", "Python")
print(new_data)

# with open("Practice.pdf", "w") as f:
#      f.write(new_data)


