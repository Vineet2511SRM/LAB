#include<stdio.h>

int main(){
    int total = 0,avg,n;
    printf("Enter no of students: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        int age = 0;
        printf("Enter age of student %d:",i);
        scanf("%d",&age);
        total+=age;
    }
    avg = total/n;
    printf("%d",avg);


    return 0;
}