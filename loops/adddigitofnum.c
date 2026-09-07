#include <stdio.h>
int main(){
    int x,y,z;
    printf("Enter the number : ");
    scanf("%d",&x);
    y=0;
    z=0;
    while (x!=0){
        z=z+x%10;
        x=x/10;
        y++;
    }
    printf("The sum of digits are %d",z);
}