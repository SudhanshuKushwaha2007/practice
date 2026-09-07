#include <stdio.h>
int main(){
    int x,y,z;
    printf("Enter 3 sides of triangle");
    scanf("%d %d %d",&x,&y,&z); 
    if((x<y+z) && (y<x+z) && (z<x+y) && x>0 && y>0 && z>0){
        printf("The triangle is possible");
    } else{
        printf("The tirangle is not possible");
    }
}