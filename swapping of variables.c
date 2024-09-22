#include <stdio.h>
int main (void)
{
    int x;
    int y;
    printf("enter the value of x:-\n");
    scanf(" %d", &x);
    printf("enter the value of y:-\n");
    scanf("%d", &y);
    printf("the numbers are %d and %d ", x, y);
    x = x-y;
    y = x + y;
    x = y - x;
    printf("\nthe swapped numbers are %d,%d\n", x , y);
}