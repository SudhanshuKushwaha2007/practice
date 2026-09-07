#include <stdio.h>

int main () {
    printf("enter value of semi major axis and semi minor axis");
    float a, b ,x;
    scanf(" %f %f",&a ,&b);
    x = 3.145*a*b;
    printf("the are of the eclipse of semi major axis of %f and semi minor axis of %f is %f",a ,b ,x);
    return 0;
}
