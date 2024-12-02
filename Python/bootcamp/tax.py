#Accepting name and salary from user 

name = input("Enter name: ")


salary = int(input("Enter salary: "))

#using if-else to decide whether to pay tax or not
if salary > 300000:
    print(f"{name}, tax payment required")
else:
    print(f"{name}, no tax payment required")


