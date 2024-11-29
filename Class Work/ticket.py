Ticket_for_child = 500
Ticket_for_teen = 700
Ticket_for_adult = 1000
costume_child = 200
custume_teen = 300
custume_adult = 400
height = int(input("Enter Your Height in CM:"))
custume = input("Do you want costume: Press "Y" for yes and "N" for No:").upper()

if height<121:
      print(f"Ticket price for height {height} CM. is {Ticket_for_child}")
elif height>120 and height<180:
      print(f"Ticket price for height {height} CM. is {Ticket_for_teen}")
else:
      print(f"Ticket Price for height {height} CM. is {Ticket_for_adult}")
