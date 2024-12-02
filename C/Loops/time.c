#include <stdio.h>

int main()
{
    int product;
    float price, total_price, discount = 0, final_price;
    printf("Enter products: ");
    scanf("%d", &product);

    // Step 1: Input the price of the product
    printf("Enter the price of the product: ");
    scanf("%f", &price);
    total_price = price * product;

    // Step 2: Apply discount based on the price range
    if (total_price > 1000)
    {
        discount = 0.30 * total_price; // 10% discount
    }
    else if (total_price >= 500 && total_price <= 1000)
    {
        discount = 0.10 * total_price; // 5% discount
    }

    // Step 3: Calculate the final price after applying the discount
    final_price = total_price - discount;

    // Step 4: Output the final price
    printf("The final price after discount is: %.2f\n", final_price);

    return 0;
}
