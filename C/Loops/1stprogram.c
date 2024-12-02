#include <stdio.h>

int main() {
   int time;
   int current_time;
   printf("Enter time in second: ");
   scanf("%d",&time);
   current_time = time;
   while(current_time>=0){
    printf("Time left is: %d\n",current_time);
    current_time--;
    if(current_time==0){
        printf("Times up");
        break;
    }
   }
   return 0;

}