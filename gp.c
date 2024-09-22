#include <stdio.h>
#include<math.h>
int main(void)
{
    int v,w,x,y,z,multiply;
    printf("the no. to start the gp?\n");
    scanf("%d",&x);
    printf("the common ratio diffrence will be?\n");
    scanf("%d",&y);
    printf("the no. of gp's required?\n");
    scanf("%d", &z);
    for(w=0;w<=z;++w)
    {
        multiply=x*pow(y,w);
        printf("term %d is %d\n",w+1,multiply);

    }
}