def pyramid(n):
    for i in range(1, n + 1):
        for j in range(n - i):
            print(" ", end=" ")
        for k in range(1, 2 * i):
            print("**", end=" ")  # Removed the extra print()

        print()  # Added to move to the next line after each row

a = int(input("Enter the Height of pyramid: "))
pyramid(a)
