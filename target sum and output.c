#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int x,z,i,y;
    bool flag=false;
    int arr[]={2,4,7,6,12,32,5,8,10,50};
    z=sizeof(arr)/sizeof(arr[0]);
    printf("the targeted sum :\n");
    scanf("%d",&x);
    for(i=0;i<z;i++)
    {;
        for(int j=i;j<z;j++)
        {
            int sum=arr[i]+arr[j];
             if (sum==x)
            {
              printf("element %d (value=%d) and element %d (value=%d) adds to %d\n",i+1,arr[i],j+1,arr[j],x);
              flag=true;
            }
            
        }
    }
    if(flag==false)
    {
        printf("No matching elements found\n");
    }
}
