Ticket_for_child = 500
Ticket_for_teen = 700
Ticket_for_adult = 1000
height = int(input("Enter Your Height in CM:"))
if height<120:
      print(f"Ticket price for height {height} CM. is {Ticket_for_child}")
elif height>120 and height<180:
      print(f"Ticket price for height {height} CM. is {Ticket_for_teen}")
else:
      print(f"Ticket Price for height {height} CM. is {Ticket_for_adult}")
