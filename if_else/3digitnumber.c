#include <stdio.h>
int main(){
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    if(x>99 && x<1000){
        printf("%d is a 3 digit number",x);
    } else {
        printf("it is not a 3digit number");
    }
}