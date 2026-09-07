#include <stdio.h>
int main(){
    printf("Enter the number to get the table : ");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        int z = i*n;
        printf("%d    ",z);
    }
    return(0);
}