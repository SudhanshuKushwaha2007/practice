#include <stdio.h>
int main (){
    printf("Enter the nummber of rows or column : ");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        {
        printf("%d",j);
        }
        printf("\n");
    }
}