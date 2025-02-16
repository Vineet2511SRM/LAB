import java.util.*;

public class TravelComputation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your name: ");
        String name = sc.nextLine();

        System.out.print("Enter From City: ");
        String fromCity = sc.nextLine();

        System.out.print("Enter Via City: ");
        String viaCity = sc.nextLine();

        System.out.print("Enter To City: ");
        String toCity = sc.nextLine();

        System.out.print("Enter Distance From To Via (in miles): ");
        double fromToVia = sc.nextDouble();

        System.out.print("Enter Distance Via To Final City (in miles): ");
        double viaToFinalCity = sc.nextDouble();

        System.out.print("Enter Time Taken (in hours): ");
        double timeTaken = sc.nextDouble();

	double totalTime = timeTaken*60;

        double totalDistance = fromToVia + viaToFinalCity;
        double speed = totalDistance / totalTime;

        System.out.println("The Total Distance travelled by " + name + " from " + fromCity + " to " + toCity + " via " + viaCity +
                           " is " + totalDistance + " miles and the Total Time taken is " + totalTime + " minutes");

        sc.close();
    }
}
