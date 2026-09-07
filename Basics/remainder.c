#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("enter value of divident and divisor : ");
    scanf("%d %d",&a ,&b);
    c = b % a;
    d = b/a;
    printf("The remainder we get by dividing %d by %d is %d \nand the quotient we get is %d", b ,a, c, d);
    return(0);
}