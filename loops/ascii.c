#include <stdio.h>
int main(){
    for(int i=-128;i<=127;i++){
        printf("%d  ",i);
        char ch = (char)i;
        printf("%c\n",ch);
    }
}