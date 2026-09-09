#include <stdio.h>
int main()
{
    int x,y,z;
    for(int i=1;i<=1000;i++)
    {
        int j;
        j=i;
        z=0;
        while(j!=0)
        {
            x = j % 10;
            j =j / 10;
            z = z + x * x * x;
        }
        if(z==i)
        {
            printf("%d is Armstorng number\n",i);
        }
    }
}
            
