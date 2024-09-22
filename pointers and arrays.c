#include <stdio.h>
int main (void)
{
    int x,i;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    x=sizeof(arr)/sizeof(arr[0]);
    int* ptr=&arr[i];
    for(i=0;i<x;i++)
    {
    printf("the address of the %d element is %p\n",i,&arr[i]);
    }
    // array elemnts using ptr
    for(i=0;i<x;i++)
    {
        printf("the element %d is %d\n",i,*ptr++);
    }
}