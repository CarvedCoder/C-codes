#include <stdio.h>
int main(void)
{
    int v,w,x,y,z,sum;
    printf("the no. to start the ap?\n");
    scanf("%d",&x);
    printf("the common diffrence will be?\n");
    scanf("%d",&y);
    printf("the no. of ap's required?\n");
    scanf("%d", &z);
    for(w=0;w<=z;++w)
    {
        sum=x+w*y;
         printf("term%d=%d\n",w+1,sum);
    }

}