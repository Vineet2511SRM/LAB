import java.util.*;

public class FahrenheitToCelsius {
	public static void main(String[] args){
		double Fahrenheit;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter temperature in  Fahrenheit: ");
		Fahrenheit = sc.nextDouble();
		
		double celsius ;
      		
		celsius = (Fahrenheit-32)*5/9;
	
		System.out.println("The  "+Fahrenheit+" Fahrenheit is "+celsius+" Celsius");
	
		}
}
