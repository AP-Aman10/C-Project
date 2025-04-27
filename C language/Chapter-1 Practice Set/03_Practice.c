#include<stdio.h>
int main() {
    int celsius;
    printf("Enter the value of Celsius: ");
    scanf("%d", &celsius);

    printf("The Value of Celsius = %d = %.2f\n",celsius,((9.0/5.0)*celsius)+32);
    return 0;
}