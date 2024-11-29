# def is_leap(year):
#       if year%4 == 0:
#             if year%100 == 0:
#                   if year%400 == 0:
#                         return True
#                   else:
#                         return False
#             else:
#                   return True
#       else:
#             return False
      
# year = int(input("Enter Year to check\n"))
# print(is_leap(year))

# Leap year 

def is_leap(year):
      if year%4 == 0:
            if year%100 == 0:
                  if year%400 == 0:
                        return True
                  else:
                        return False
            else:
                  return True
      else:
            return False
      
def days_month(month):
      month_days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
      bool = is_leap(year)
      if month == 2 and bool == True:
            return "Year is leap and day in 2nd month is: 29"
      elif bool == True:
            return f"Year is leap and days in {month} are {month_days[month-1]}"
      elif bool == False:
            return f"Year is Not leap and days is {month} are {month_days[month-1]}"
      
month = int(input("Enter Month :\n"))
year = int(input("Enter Year:\n"))

output = days_month(month)
print(output)


