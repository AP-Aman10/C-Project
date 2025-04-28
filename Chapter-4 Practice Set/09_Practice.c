#include <stdio.h>
int main(){
    int num;
    printf("Enter the num: ");
    scanf("%d", &num);
    int not_prime = 0;

    if (num == 0 || num == 1){
        not_prime = 1;
    }
    else{
        int i =2;
        // while (i < num)
        // {
        //     if (num % i == 0 && num != 2)
        //     {
        //         not_prime = 1;
        //         break;
        //     }
        //     i++;
        // }
        do{
            if (num % i == 0 && num != 2){
                not_prime = 1;
                break;
            }
            i++;
        }while (i < num);
    }
    if (not_prime){
        printf("%d is not prime\n", num);
    }
    else{
        printf("%d is prime\n", num);
    }
    return 0;
}