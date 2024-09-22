#include <stdio.h>
void func(int val);
int main(void)
{
    int arr[5]={1,2,3,4,5,};
    int i=0;
    int x;
    printf("the array order is\n");
    for(i=0;i<5;i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("\n");
    printf("the position of the array you want to pass\n");
    scanf("%d",&x);
    func (arr[x]);
}
void func(int val)
{
printf("the array value passed is %d\n",val);
}