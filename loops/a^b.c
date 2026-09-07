#include <stdio.h>
int main(){
    int a,b,c,z;
    z=1;
    printf("Enter the value of a and b for a^b : ");
    scanf("%d %d",&a ,&b);
    for(int i=1;i<=b;i++){
        z=z*a;
    }
    printf("The value of exponent is %d",z);
}