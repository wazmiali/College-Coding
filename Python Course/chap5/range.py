# Print the even number
# for i in range(2, 101, 2):
#       print(i)


# for i in range(100, 0, -1):
#       print(i)


# n = int(input("Enter a number: "))

# for i in range(1, 11):
#       print(n * i)


#Pass statement 
# Pass is a null statement that does nothing it is used as a placeholder for future code.

# for i in range(5):
#      pass

# print("Some useful work")


#sum of total number user input
# n = int(input("Enter a number: "))

# sum = 0 
# for i in range(1, n+1):
#       sum +=i

# print("total sum", sum)

n = int(input("Enter a number: "))
sum = 0
i = 1
while i <= n:
      sum += i
      i += 1
print("total sum =",sum)