#include <stdio.h>
#include<math.h>
int main(void)
{
    int v,w,x,y,z,multiply=1;
    printf("which number factorial do you want?\n");
    scanf("%d",&x);
    for(z=1;z<=x;++z)
    {
        multiply=multiply*z;
    }
    printf("the answer is %d\n",multiply);
}