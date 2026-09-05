#include <stdio.h>

int main(){
    float v, r;
    printf("Enter value of the radius :");
    scanf("%f", &r);
    v = 4.0*3.141*3.141*3.141/3.0*r;
    printf("The volume of sphere is %f",v);
    return 0;
}