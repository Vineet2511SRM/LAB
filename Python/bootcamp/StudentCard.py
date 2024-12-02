# Accept name and score in 3 subjects

name = input("Enter student name: ")
print("Please enter marks for three subjects [CHEMISTRY, PHYSICS, MATHEMATICS]")
chem = float(input("Enter marks in Chemistry (out of 100): "))
phy = float(input("Enter marks in Physics (out of 100): "))
math = float(input("Enter marks in Maths (out of 100): "))

if chem<0 or phy<0 or math<0:
    print("Please enter marks in positive....")

#Calculation of Total and Average
total = (chem+phy+math)
average = total/3

if chem<35 or phy<35 or math<35:
    print("Fail")
# Check for class
else:
    
    if (chem <=100) and (phy <=100) and (math <=100):
        if average >= 60:
            print(f"{name} has passed with 1st class. His total score is {total} and average score is {average:.2f}")
        elif average >= 50:
            print(f"{name} has passsed with 2nd Class. His total score is {total} and average score is {average:.2f}")
        elif average >= 35:
            print(f"{name} has passed. His total score is {total} and average score is {average:.2f}")
        else:
            print(f"{name} has failed. His total score is {total} and average score is {average:.2f}")
    else:
        print("Enter marks out of 100.")
