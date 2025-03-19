with open("output.csv", "r") as source:  # Open the source file
    with open("copy.pdf", "w") as file:  # Open the destination file
        for line in source:  # Iterate over each line in the source file
            file.write(line)  # Write each line to the new file

# Open the copied file to read and display its contents
with open("copy.txt", "r") as file:
    print(file.read())