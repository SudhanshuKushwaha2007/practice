#include <stdio.h>
int main()
{
    int m;
    printf("Enter your marks : ");
    scanf("%d",&m);
    if(100>=m && m>=91)
    {
        printf("tum tej ho lode ");
    }   else if (90>=m && m>=81)
    {
        printf("thik thaak hi ho lode");
    }   else
    {
        printf(" chutiya ho tum");
    }
}        