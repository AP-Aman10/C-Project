#include <stdio.h>
int main(){
    int a = 60;
    int b = 13;
    printf("The value of a is %d and value of b is %d and sum is %d\n", a, b,a+b);
    printf("The value of a is %d and value of b is %d and subtraction is %d\n", a, b,a-b);
    printf("The value of a is %d and value of b is %d and multiplication is %d\n", a, b,a*b);
    printf("The value of a is %d and value of b is %d and division is %d\n", a, b,a/b);
    printf("The remainder when a is %d divided by b is %d: %d\n", a, b ,a%b);
    return 0;
}