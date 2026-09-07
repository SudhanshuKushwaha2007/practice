#include <stdio.h>
int main(){
    int a;
    printf("Enter the number you want to repeat the statemnt : ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        printf("%d  ",i);
    }

}