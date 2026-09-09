#include <stdio.h>
int main (){
    printf("Enter the value of n");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a;
        a=65;
        char ch = (char)a;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%c",a);
            a++;
        }
        printf("\n");
    }
}