#include <stdio.h>
char name[30];
int main(void)
{
    printf("write your full name\n");
    fgets(name, sizeof(name), stdin);
    printf("welcome back %s\n",name);
    printf("%p",&name);// stored in hexadecimal form
    
}