#include <stdio.h>
int main() {
    float height,length,width,volume;
    printf("enter the height");
    scanf("%f",&height);
    printf("enter length");
    scanf("%f",&length);
    printf("enter the width");
    scanf("%f",&width );
    volume = (length*height*width);
    printf("The area of cuboid is %f", volume);
    return 0;
}