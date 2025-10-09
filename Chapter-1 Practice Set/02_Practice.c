#include<stdio.h>
int main() { 
    int radius, height;
    printf("Enter the value of Radius: ");
    scanf("%d", &radius);
    printf("Enter the value of height: ");
    scanf("%d", &height);

    printf("The area of Circle with radius %d = %.2f\n",radius,3.14*radius*radius);
    printf("The Volume of Cylinder with radius %d and height %d = %.2f\n",radius,height,3.14*radius*radius*height);
    return 0;
}