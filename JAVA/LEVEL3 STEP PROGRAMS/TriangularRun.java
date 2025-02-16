import java.util.*;

public class TriangularRun {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter side 1 (meters): ");
        double side1 = scanner.nextDouble();

        System.out.print("Enter side 2 (meters): ");
        double side2 = scanner.nextDouble();

        System.out.print("Enter side 3 (meters): ");
        double side3 = scanner.nextDouble();

        double perimeter = side1 + side2 + side3;
        double rounds = 5000 / perimeter;

        System.out.println("The total number of rounds the athlete will run is " + Math.ceil(rounds) + " to complete 5 km.");

        scanner.close();
    }
}
