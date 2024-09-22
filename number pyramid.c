#include<stdio.h>
int main(void)
{
    int x,y,z;
    printf("the no. till you want the pyramid to be?\n");
    scanf("%d",&z);
    for(x=1;x<=z;++x)
    {
        for(y=1;y<=x;++y)
        {
            printf(" %d ",y);
        }
        printf("\n");
    }
}