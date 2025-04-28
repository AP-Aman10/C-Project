#include <stdio.h>
int sum(int *, int *);
int sum(int* a, int* b){ // sum function can change x using a
    *a = 100;
    return (*a + *b);
}
int main(){
    int x = 1, y=6;
    printf("The sum of x and y: %d\n", sum(&x, &y));
    printf("The value of x is %d", x);
    return 0;
}