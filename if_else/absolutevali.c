#include <stdio.h>
int main(){
    int x,n;
    printf("Enter Number : ");
    scanf("%d",&x);
    if(x<0){
        n=x*(-1);
        printf("The absolute value of %d is %d",x,n);
    } else {
        printf("The absolue value is same as original value");
    }
}