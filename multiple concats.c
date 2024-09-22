#include <stdio.h>
int main (void)
{
    char x[10];
    char y[10];
    int z;

    int aa;
    int* ptr;
    printf("what's your first name?: ");
    scanf("%s", x);
    printf("what's your last name?: ");
    scanf("%s", y);
    printf("what is your age?: ");
    scanf("%d", &z); //
    printf("your name is: %s %s \nyour age %d is: %p \n", x,y,z);
    printf("size=%d",sizeof(z));
    //printf("", z);
     scanf("%d", &aa); //
     scanf("%d", &ptr); //

     printf("1st val is %d and 2nd val is %d newval is %p",aa,ptr,ptr);
} 