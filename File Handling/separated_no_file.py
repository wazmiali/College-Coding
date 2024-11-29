# Print the Given list in a file then find the number list using a file handling
with open("practice.txt", "r") as f:
      data = f.read()
      print(data)

      num = ""
      for i in range(len(data)):
            if(data[i] == ","):
                  print(int(num))
                  num = ""
            else:
                  num += data[i]



# Find the even number in the list
# count = 0
# with open("practice.txt", "r") as f:
#       data = f.read()

#       nums = data.split(",")
#       for val in nums:
#             if(int(val) % 2 == 0):
#                   count += 1

# print(count)
