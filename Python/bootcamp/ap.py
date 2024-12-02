n = int(input("Enter the number of terms: "))
first_term= 1
common_difference = 1
i = 0
while i < n:
    print(first_term,end=",")
    first_term += common_difference
    common_difference+= 1  
    i += 1
