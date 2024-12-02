#include<stdio.h>

void function(){
    int x = 20; //local variable
    static int y = 30; //static variable
    x = x+10;
    y = y+10;
    printf("\tLocal: %d\n\tStatic: %d\n", x,y);
}
    int main(){
        printf("First call\n");
        function();
        printf("Second call\n");
        function();
        printf("Third call\n");
        function();
        return 0;

    }
