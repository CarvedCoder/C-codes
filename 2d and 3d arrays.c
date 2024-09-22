#include <stdio.h>
int main(void)
{
    int arr[2][2]={1,2,3,4};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int arr1 [2][2][2]={1,2,3,4,5,6,7,8};
    for(int x=0;x<2;x++)
    {
        for(int y=0;y<2;y++)
        {
            for(int z=0;z<2;z++)
            {
                printf("%d",arr1[x][y][z]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
}