#include <stdio.h>
int main(){
    int x,y,z;
    printf("Enter the first number : ");
    scanf("%d",&x);
    printf("Enter the second number : ");
    scanf("%d",&y);
    printf("Enter the third number : ");
    scanf("%d",&z);
    if(x>y && x>z){
        printf("x is the gretest number");
    }
    if(y>x && y>z){
        printf("y is the gretest number");
    }
    if(y>x && z>y){
        printf("z is the gretest number");
    }
}