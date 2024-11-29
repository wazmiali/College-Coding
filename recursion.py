def recursion_fibonacci(n):
      if n<=1:
            return n
      else:
            return(recursion_fibonacci(n-1) + recursion_fibonacci(n-2))

n_terms = 10

if n_terms <= 0:
      print("Invalid input ! Please input a positive value")
else:
      print("Fibonacci series:")
for i in range(n_terms):
      print(recursion_fibonacci(i))      