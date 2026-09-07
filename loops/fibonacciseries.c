#include <stdio.h>
int main(){
    int a,b,sum,n;
    printf("Enter amount of terms of febonacci series : ");
    scanf("%d",&n);
    sum=0;
    a=0;
    b=1;
    for (int i=0;i<n;i=i+1){
        printf("%d\n",a);
        sum=a+b;
        a=b;
        b=sum;
    }
}