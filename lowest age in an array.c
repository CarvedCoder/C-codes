#include <stdio.h>
int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
int main(void)
{
    int x=sizeof(ages)/sizeof(ages[0]);
    int lowestage=ages[0];
    for(int i=0;i<x;i++)
    {
        if(lowestage>ages[i])
        {
            lowestage=ages[i];
        }
    }
    printf("the lowest age in the given array is %d",lowestage);
}