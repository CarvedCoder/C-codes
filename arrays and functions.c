#include <stdio.h>
void function(int arr[],int x);
int main(void)
{
    int arr[]={1,2,3,4,5};
    int x=sizeof(arr)/sizeof(arr[0]);
    printf("size of array:%d\n",sizeof(arr));
    function(arr,x);
}
void function(int arr[],int x)
{
    printf("size of array:%d\n",sizeof(arr));
    printf("the elements of the array are : ");
    for(int i=0;i<x;i++) 
    {
        printf("%d ",arr[i]);
    }
    
}

