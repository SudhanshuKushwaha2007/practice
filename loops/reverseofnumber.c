#include <stdio.h>
int main(){
    int x,y,z,a;
    y=z=a=0;
    printf("Enter the number u want to make reverse of : ");
    scanf("%d",&x);
    while(x!=0){
        y=x%10;
        x=x/10;
        z=z*10+y;
    }
    printf("The reverse of number is %d",z);
}