#include <stdio.h>
int functioncheck(int n);
int main (void)
{
    int n;
    int y;
    printf("the num you want to check as a prime num\n");
    scanf("%d",&n);
    y=functioncheck(n);
    if (y==1)
    {
        printf("it is a prime num!\n");
    }
    else
    {
        printf("it is not a prime num!\n");
    }
}
int functioncheck(int n)
{
    int x;
    if (n==1 || n==0)
    {
        return 0;
    }
 for (x=2;x<=n/2;x++)
 {
    if (n%x==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
 }
}