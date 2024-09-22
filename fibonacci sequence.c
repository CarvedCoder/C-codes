#include <stdio.h>
int main (void)
{
    int term1=0,terms,x,term2=1,term3;
    printf("till which term you want the sequence to continue?\n");
    scanf("%d",&terms);
    for(x=1;x<=terms;x++)
    {
        term3=term1+term2;
        printf(" %d ",term2);
        term1=term2;
        term2=term3;
    }

}