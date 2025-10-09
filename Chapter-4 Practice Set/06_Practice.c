#include <stdio.h>
int main(){
    // 8! = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8
    // 5! = 1 X 2 X 3 X 4 X 5
    // n! = 1 X 2 X 3 X 4 X 5 ..... X n
    // 0! = 1
    int product=1;
    int nun;
    printf("Enter the num: ");
    scanf("%d", &nun);
    for (int i = 1; i <= nun; i++){
        product *=i;
    }
    printf("The factorial is %d", product);
    return 0;
}