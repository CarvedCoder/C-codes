#include <stdio.h>
int functionmax(int x, int y);
int main(void)
{
    int a,b,c,d,max,z;
    printf("write the value of the four integers\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    max=functionmax(
                    functionmax(
                        functionmax(a,b),c),d);
    printf("the maximum integer is %d\n",max);
}
int functionmax(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}