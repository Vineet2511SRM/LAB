

# Accepting 3 numbers
print("Please enter 3 numbers......: ")
num1 = int(input("Enter number 1: "))
num2 = int(input("Enter number 2: "))
num3 = int(input("Enter number 3: "))

# Checking which number is largest and second largest and printing them
if num1 > num2:
    if num2 > num3:
        print(f"{num1} is largest. {num2} is 2nd largest.")
    elif num3 > num2:
        if num3 > num1:
            print(f"{num3} is largest. {num1} is 2nd largest.")
        else:
            print(f"{num1} is largest. {num3} is 2nd largest.")
    else:  # num3 == num2
        print(f"{num1} is largest. {num3} is 2nd largest.")
elif num2 > num1:
    if num3 > num2:
        print(f"{num3} is largest. {num2} is 2nd largest.")
    elif num2 > num3:
        if num3 > num1:
            print(f"{num2} is largest. {num3} is 2nd largest.")
        else:
            print(f"{num2} is largest. {num1} is 2nd largest.")
    else:  # num3 == num2
        print(f"{num2} is largest. {num1} is 2nd largest.")
elif num1 == num2:
    if num3 > num1:
        print(f"{num3} is largest. {num1} is 2nd largest.")
    elif num3 < num1:
        print(f"{num1} is largest. {num3} is 2nd largest.")
    else:
        print("All three numbers are equal.")
else:
    print("No single number is largest.....")

print("**********************************")
