#include<stdio.h>
int main (void)
{
    char x[10];
    char y[10];
    printf("what's your first name?: ");
    scanf("%s", x);
    printf("what's your last name?: ");
    scanf("%s", y);
    printf("your name is %s %s\n", x,y);
 
}
