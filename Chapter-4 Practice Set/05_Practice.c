#include <stdio.h>
int main(){
    int num, sum=0;
    printf("Enter the num: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++){
        sum += (num*i);
    }
    printf("The sum of the table of %d is %d",num, sum);
    return 0;
}