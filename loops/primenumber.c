#include <stdio.h>
int main(){
    int x,a;
    a=0;
    printf("Enter the number to check for prime nummber : ");
    scanf("%d",&x);
    for(int i = 2;i<=x-1;i++){
        if(x%i==0){
            printf("The entered number is composite number");
            a=1;
            break;
        }   
    }
    if(a==0){
        printf("The number is prime number");
    }
}