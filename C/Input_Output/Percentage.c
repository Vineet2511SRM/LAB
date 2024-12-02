#include<stdio.h>

int main(){
    float m1= 36; //maths marks
    float m2 = 32; //physics marks
    float m3 = 40; //chemistry marks
    float m4 = 31; //english marks
    
    float percent = (m1+m2+m3+m4)/4;
    printf("Percentage of 4 subjects where marks are out of 40 is is : %f",percent);
    return 0;
}