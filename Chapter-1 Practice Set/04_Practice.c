#include<stdio.h>
int main() {
    float Principal, annual_interest, time;
    printf("Enter the value of Principal: ");
    scanf("%f", &Principal);
    printf("Enter the value of annual_interest: ");
    scanf("%f", &annual_interest);
    printf("Enter the value of time: ");
    scanf("%f", &time);

    printf("The value of Simple Interest = %.2f\n", (Principal * annual_interest * time) / 100);   
    return 0;
}