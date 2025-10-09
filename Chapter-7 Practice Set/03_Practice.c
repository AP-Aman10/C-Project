#include <stdio.h>
int main(){
    int num;
    printf("Enter the num: ");
    scanf("%d", &num);
    int arr[10];
    for (int i = 0; i < 10; i++){
        arr[i] = num* (i+1);
    }
    for (int i = 0; i < 10; i++){
        printf("The value of %d X %d = %d \n", num,  i+1, arr[i]);
    }
    return 0;
}