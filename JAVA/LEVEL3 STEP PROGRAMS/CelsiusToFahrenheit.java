import java.util.*;

public class CelsiusToFahrenheit {
	public static void main(String[] args){
		double celsius;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter temperature in celcius : ");
		celsius = sc.nextDouble();
		
		double Fahrenheit;
      		
		Fahrenheit = ((celsius*9)/5)+32;
	
		System.out.println("The "+celsius+" celsius is "+Fahrenheit+" Fahrenheit");
	
		}
}
