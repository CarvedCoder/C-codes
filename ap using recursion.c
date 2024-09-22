#include <stdio.h>
int sum(int terms);
int total=0;
int main(void)
{
    int x,y;
    printf("the amount till you want the sum sum of\n");
    scanf("%d",&x);
    y= sum(x);
    printf("sum is %d\n",y);
}
int sum(int terms)
{
    
    if (terms != 0)
    {
        return terms+sum(terms-1);
    }
    else
    {
        return terms;
    }
}