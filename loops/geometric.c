#include <stdio.h>
int main(){
    int x;
    printf("Enter amount of terms for geometric progression : ");
    scanf("%d",&x);
    int a=1;
    for(int i=1;i<=x;i++){
        a=a*2;
        printf("%d  ",a);
    }
}