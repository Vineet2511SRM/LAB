#include<stdio.h>

int main(){
    float r,area,pi = 3.14;
    
    printf("Enter radius of the circle: ");
    scanf("%f",&r);
    printf("Radius of the circle is  : %f\n",r);
    area = (pi*r*r);
    printf("Area of the circle is : %2f",area); 
    return 0;
}