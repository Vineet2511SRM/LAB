#Calculating total value discount amount and selling price

item_name = input("Enter name of the item: ")

unit_price = float(input("Enter price of the item: "))

Quantity = int(input("Enter no of items: "))

percentagediscount=float(input("Enter discount: "))

Total = unit_price*Quantity

discount = (Total*percentagediscount)/100

Final_SellingPrice = Total-discount

print("Total: ",Total)
print("Discount: ",discount)
print("Final: ",Final_SellingPrice)