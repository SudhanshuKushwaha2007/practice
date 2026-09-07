#include <stdio.h>
int main(){
    int n;
    printf("Enter the amount of terms you want for odd number arithmetic expression: ");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i=i+2){
        printf("%d   ",i);
    }
}