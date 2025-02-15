import java.util.Scanner;  // Import Scanner for user input

public class BasicJavaProgram {
    public static void main(String[] args) {
        
        System.out.println("Hello, World!");

      
        int number = 10;
        double pi = 3.14;
        String message = "Java is fun!";

        
        System.out.println("Number: " + number);
        System.out.println("Value of Pi: " + pi);
        System.out.println("Message: " + message);

        
        try (Scanner obj = new Scanner(System.in) // Create Scanner object
        ) {
            System.out.print("Enter your name: ");
            String name = obj.nextLine();  // Read user input
            // Print a personalized message
            System.out.println("Hello, " + name + "! Welcome to Java.");
            // Loop example: Print numbers from 1 to 5
            System.out.println("Counting from 1 to 5:");
            for (int i = 1; i <= 5; i++) {
                System.out.println(i);
            }
            // Close the scanner
        }
    }
}
