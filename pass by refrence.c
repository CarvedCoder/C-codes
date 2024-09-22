#include <stdio.h>
void func(int *ref,int x);
int main(void)
{
    int arr[]={1,2,3,4,5};
    int i;
    int x=sizeof(arr)/sizeof(arr[0]);
    printf("the array order is\n");
    for(i=0;i<x;i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("\n");
    func(arr,x);
    
}
void func(int *ref, int x)
{
    printf("the value passed as per refrence is-:\n");
    int i=0;
    for(i=0;i<x;i++)
    {
        printf(" %d ",*(ref+i));
    }
}