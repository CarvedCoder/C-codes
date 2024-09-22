#include <stdio.h>
char string[]="hello world";
int main(void)
{
    int x=sizeof(string)/sizeof(string[0]);
    for(int i=0;i<x;i++)
    {
        printf("%c",string[i]);
    }
    printf("\n");
}