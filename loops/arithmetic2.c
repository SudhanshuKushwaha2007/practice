#include <stdio.h>
int main(){
    int x;
    printf("Enter the number of terms for arithmetic expression : ");
    scanf("%d",&x);
    for(int i = 4;i<=3*x+1;i=i+3){
        printf("%d   ",i);
    }
}