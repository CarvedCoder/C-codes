#include<stdio.h>
int main(void)
{
    int arr[5];
    int i;
    for(i=1;i<=5;i++)
    {
        printf("the array values for %d position is:-",i);
        scanf("%d",&arr[i]);
    }
    printf("the array order is\n");
    for(i=1;i<=5;i++)
    {
    printf(" %d ",arr[i]);
    }
    printf("\nthe reversed order of the array is \n");
    for(i=5;i>=1;i--)
    {
        printf(" %d ",arr[i]);
    }
    printf("\n");
}