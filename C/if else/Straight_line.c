#include<stdio.h>

int main()
{
    double x1;
    printf("Enter first coordinate of A: ");
    scanf("%lf", &x1);
    double y1;
    printf("Enter second coordinate of A: ");
    scanf("%lf", &y1);
    double x2;
    printf("Enter first coordinate of B: ");
    scanf("%lf", &x1);
    double y2;
    printf("Enter second coordinate of B: ");
    scanf("%lf", &y2);
    double x3;
    printf("Enter first coordinate of C: ");
    scanf("%lf", &x3);
    double y3;
    printf("Enter second coordinate of C: ");
    scanf("%lf", &y3);
    int m1 = (y2-y1)/(x2-x1);//slope of AB
    int m2 = (y3-y2)/(x3-x2);//slope of BC
    if(m1==m2){
        printf("Point A,B,C lie on a straight line...");
    }
    else{
        printf("Point A,B,C does not lie on a straight line...");
    }
    return 0;
}
    