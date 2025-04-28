#include <stdio.h>
int sum(int, int);
int sum(int a, int b){ // Sum function cannot change x using a because copy of x is provided to sum in a
    a =100;
    return a + b;
}
int main(){
    int x =46 , y =54;
    printf("The value of x: %d\n", x);
    printf("The value of y: %d\n", y);
    printf("The sum of 46 and 54: %d\n", sum(x, y));
    return 0;
}