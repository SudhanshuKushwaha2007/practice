#include <stdio.h>
int main(){
    printf("Enter the number of rows");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a;
        a=65;
        char ch =(char)a;
        for(int j=1;j<=i;j++){
            if(i%2!=0){
            printf("%d",j);
            }else {
                printf("%c",a);
            }a++;
        }printf("\n");
    }
}