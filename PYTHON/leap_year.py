# A leap year satisfies either of the following conditions : 
# 1. Year is multiple of 400.
# 2. Year is multiple of 4 and not multiple of 100.

year = int(input("Enter the year "))
if (year % 400) == 0 or (year % 4 == 0 and year % 100 != 0):
    print("Leap year")
else:
    print("Not a leap year")
