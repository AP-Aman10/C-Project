#include <stdio.h>
int main(){
    // 8! = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8
    // 5! = 1 X 2 X 3 X 4 X 5
    // n! = 1 X 2 X 3 X 4 X 5 ..... X n
    // 0! = 1
    int i = 1, product=1, num;
    printf("Enter the num: ");
    scanf("%d", &num);
    while(i<=num){
        product *=i;
        i++;
    }
    printf("The factorial of %d is %d", num, product);
    return 0;
}