#include <stdio.h>
int main(){
    int y=0;
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        y++;
    }

    printf("The number of digits are %d",y);
    return(0);
}