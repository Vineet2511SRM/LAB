 
n=int(input("Enter limit: "))
i = 1  
count = 1

while count < n:  
    if count%4!=0:
        print(i)
    
    count = count+1
    i = count**2
