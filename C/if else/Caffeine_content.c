#include <stdio.h>

// Define caffeine content in mg per ounce for different coffee types
#define ESPRESSO_CAFFEINE_PER_OZ 63.0  // Caffeine content per ounce in mg
#define AMERICANO_CAFFEINE_PER_OZ 15.0 // Caffeine content per ounce in mg
#define DRIP_COFFEE_CAFFEINE_PER_OZ 12.0 // Caffeine content per ounce in mg
#define LATTE_CAFFEINE_PER_OZ 63.0    // Caffeine content per ounce in mg

int main() {
    int coffeeType;
    float volume, caffeineContent = 0.0;

    // Display coffee type options
    printf("Select the type of coffee:\n");
    printf("1. Espresso\n");
    printf("2. Americano\n");
    printf("3. Drip Coffee\n");
    printf("4. Latte\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &coffeeType);

    // Validate coffee type selection
    if (coffeeType < 1 || coffeeType > 4) {
        printf("Invalid selection. Please run the program again and choose a valid option.\n");
        return 1;
    }

    // Input volume of coffee
    printf("Enter the volume of coffee (in ounces): ");
    scanf("%f", &volume);

    // Ensure the volume is positive
    if (volume <= 0) {
        printf("Volume must be a positive number. Please run the program again and enter a valid volume.\n");
        return 1;
    }

    // Calculate caffeine content based on coffee type
    switch (coffeeType) {
        case 1:
            caffeineContent = volume * ESPRESSO_CAFFEINE_PER_OZ;
            break;
        case 2:
            caffeineContent = volume * AMERICANO_CAFFEINE_PER_OZ;
            break;
        case 3:
            caffeineContent = volume * DRIP_COFFEE_CAFFEINE_PER_OZ;
            break;
        case 4:
            caffeineContent = volume * LATTE_CAFFEINE_PER_OZ;
            break;
    }

    // Output the caffeine content
    printf("The caffeine content in your coffee is: %.2f mg\n", caffeineContent);

    return 0;
}
