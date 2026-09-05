#include <stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter divisor : ");
    scanf("%d",&a);
    printf("Enter divident : ");
    scanf("%d",&b);

    c = b/a;
    d = b - c*a;

    printf("the quotient is %d and remainder is %d",c ,d);
    return (0);
}   