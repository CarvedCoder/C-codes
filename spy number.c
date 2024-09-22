#include <stdio.h>

/*go through every digit
store it
multiply it
add it
go through if code block
check if multiply = add*/

int main(void)
{
    int x, y, sum, product;
    sum = 0;
    product = 1;
    printf("what is the integer you want to check for : ");
    scanf("%d", &x);
    while (x != 0)
    {
        y = x % 10;
        x = x / 10;
        sum += y;
        product *= y;
    }
    if (sum == product)
    {
        printf("your integer is a spy number\n");
    }
    else
    {
        printf("your integer is not a spy number\n");
    }
}