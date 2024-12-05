def is_valid_triangle(a, b, c):
    """Check if three sides can form a triangle."""
    return a + b > c and a + c > b and b + c > a

def get_positive_number():
    """Prompt the user for a positive number and validate input."""
    while True:
        try:
            print("Enter a positive number: ", end="")
            value = float(input())
            if value <= 0:
                raise ValueError("The number must be greater than zero.")
            return value
        except ValueError as e:
            print(f"Invalid input: {e}. Please enter a positive number.")

def main():
    """Main program loop."""
    while True:
        print("\nEnter the lengths of the three sides of a triangle:")
        side1 = get_positive_number()
        side2 = get_positive_number()
        side3 = get_positive_number()

        if is_valid_triangle(side1, side2, side3):
            print("\n🎉 Congratulations! These sides form a valid triangle.")
            break
        else:
            print("\n🚫 Oops! These sides do not form a valid triangle. Please try again.")

if __name__ == "__main__":
    main()
