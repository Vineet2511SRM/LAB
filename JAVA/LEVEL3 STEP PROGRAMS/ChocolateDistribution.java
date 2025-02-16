import java.util.*;

public class ChocolateDistribution {
    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);

        System.out.print("Enter number of chocolates: ");
        int numberOfChocolates = obj.nextInt();

        System.out.print("Enter number of children: ");
        int numberOfChildren = obj.nextInt();

        int chocolatesPerChild = numberOfChocolates / numberOfChildren;
        int remainingChocolates = numberOfChocolates % numberOfChildren;

        System.out.println("The number of chocolates each child gets is " + chocolatesPerChild + " and the number of remaining chocolates are " + remainingChocolates);

        obj.close();
    }
}
