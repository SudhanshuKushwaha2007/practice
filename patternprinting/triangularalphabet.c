#include <stdio.h>
int main(){
    printf("Enter the number of rows : ");
    int n; 
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=65;
        for(int j=1;j<=i;j++){
            char ch = (char)a;
            printf("%c  ",ch);
            a++;
        }printf("\n");
    }
}