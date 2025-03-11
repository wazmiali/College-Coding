menu = {
    "Pizza": 40,
    "Pasta": 50,
    "Burger": 60,
    "Salad": 70,
    "Coffee": 80,
}

print("Welcome to Python Cafe.")
print("Menu:")
for item, price in menu.items():
    print(f"{item}: Rs{price}")

order_total = 0

item_1 = input("Enter the name of the item you want to order: ").title()

if item_1 in menu:
    order_total += menu[item_1]
    print(f"Your item '{item_1}' has been added to your order.")
else:
    print(f"Sorry, '{item_1}' is not available.")

another_order = input("Do you want to add another item? (Yes/No): ").strip().lower()
if another_order == "yes":
    item_2 = input("Enter the name of the second item: ").title()
    if item_2 in menu:
        order_total += menu[item_2]
        print(f"Your item '{item_2}' has been added to your order.")
    else:
        print(f"Sorry, '{item_2}' is not available.")

print(f"The total amount of your order is Rs{order_total}.")
