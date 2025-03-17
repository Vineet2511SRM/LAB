import java.util.Scanner;

public class SignOfANumber {
    
    public static void main (String[] args){

        Scanner obj = new Scanner(System.in);

        int[] num = new int[5];

        System.out.println("Enter 5 numbers : ");

        for(int i = 0; i < num.length; i++){
            num[i] = obj.nextInt();
        }

        for(int i = 0; i < num.length; i++){
            if(num[i] > 0){
                // Checking for even number
                if(num[i] % 2 == 0)
                    System.out.println(num[i] + " is an Even number");
                else 
                    System.out.println(num[i] + " is an Odd number");
            }
            else if(num[i] < 0) 
                System.out.println(num[i] + " is a Negative number");
            else
                System.out.println(num[i] + " is Zero");
        }

        // Comparing the first and last elements of the array
        if(num[0] == num[num.length - 1]) {
            System.out.println("The first and last numbers are the same.");
        } else if(num[0] > num[num.length - 1]) {
            System.out.println("The first number is greater than the last number.");
        } else {
            System.out.println("The first number is less than the last number.");
        }

        obj.close();
    }
}