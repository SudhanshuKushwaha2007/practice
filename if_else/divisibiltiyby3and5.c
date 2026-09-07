#include <stdio.h>
int main(){
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    if(x%3==0 && x%5==0){
        printf("The number is divisible by 3 and 5");
    } else {
        printf("it is not divisible by 3 and 5");
    }
}