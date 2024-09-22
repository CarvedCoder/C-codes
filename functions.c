#include <stdio.h>
int function(int num);
int main(void) 
{
    int result,num;
    printf("type the integer you want the square of \n");
    scanf("%d",&num);
    printf("%d",result);
    result=function(num);
    printf("the square of %d is %d",num,result);
}
 int function(int num)
{ 
    int sq;
    sq=num*num;
    return sq;
}