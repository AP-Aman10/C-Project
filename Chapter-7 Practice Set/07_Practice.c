#include <stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter the num1: ");
    scanf("%d", &num1);
    printf("Enter the num2: ");
    scanf("%d", &num2);
    printf("Enter the num3: ");
    scanf("%d", &num3);
    int arr[3][10];
    int mul[] = {num1, num2, num3};
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 10; j++){
            arr[i][j] = mul[i] * (j + 1);
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 10; j++){
            printf("The value of arr[i][j] is %d\n", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}