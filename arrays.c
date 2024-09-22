#include <stdio.h>
int main (void)
{
    // array declaration using size
    int arr1[5]={1,2,3,4,5};
    // array declaration without size
    int arr2[]={2,4,8,16,32};
    // array intilization after declaration
    int arr3[5];
    for(int i=0;i<=5;i++)
    {
        arr3[i]=i*2;
    }
    for(int x=0;x<5;x++)
    {
        printf("%d ",arr2[x]);
    }
}