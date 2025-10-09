#include <stdio.h>
    int sum(int, int);
    int sum(int x, int y){
        return x+y;
}
int main(){
    int a = 1;
    int b = 2;
    int c  = sum(a,b);
    printf("%d\n", c);
    int a1 = 12;
    int b1 = 23;
    int c1 = sum(a1,b1);
    printf("%d\n", c1);
    int a2 = 2;
    int b2 = 27;
    int c3 = sum(a2, b2);
    printf("%d\n", c3); 
    return 0;
}