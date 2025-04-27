#include<stdio.h>
int main(){
    int length, breadth;
    printf("Enter the Length: ");
    scanf("%d", &length);
    printf("Enter the breadth: ");
    scanf("%d", &breadth);

    printf("The Area of this Rectangle is %d\n", length*breadth);
    return 0;
}