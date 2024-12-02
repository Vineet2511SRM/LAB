
total_land = 80
segments = 5
land_per_segment = total_land / segments  

yields_per_acre = {
    "tomato": (0.3 * 10 + 0.7 * 12),  
    "potato": 10,
    "cabbage": 14,
    "sunflower": 0.7,
    "sugarcane": 45
}
prices_per_kg = {
    "tomato": 7,
    "potato": 20,
    "cabbage": 24,
    "sunflower": 200,
    "sugarcane": 4000 / 1000  
}

sales_per_crop = {}
for crop, yield_per_acre in yields_per_acre.items():
    sales_per_crop[crop] = yield_per_acre * land_per_segment * prices_per_kg[crop]

overall_sales = sum(sales_per_crop.values())

chemical_free_sales = (
    sales_per_crop["tomato"] +  # Tomatoes (chemical-free after 6 months)
    sales_per_crop["potato"] +  # Potatoes (chemical-free after 6 months)
    sales_per_crop["cabbage"] +  # Cabbage (chemical-free after 6 months)
    sales_per_crop["sunflower"]  # Sunflower (chemical-free after 10 months)
)

print("Overall sales from the 80 acres of land: Rs.", overall_sales)
print("Sales realization from chemical-free farming at the end of 11 months: Rs.", chemical_free_sales)
