#include <stdio.h>
int main (void)
{
int x;
int y;
int sum;
int substract;
int divide;
int multiply;
char answer;
    printf("Enter value of x-:\n");
    scanf("%d", &x);
    printf("enter value of y-:\n");
    scanf("%d", &y);
    sum = x + y;
    substract = x - y;
    divide = x/y;
    multiply = x*y;
    printf("sum is %d + %d = %d\n", x, y, sum);
    printf("do you want to continue? Y or N\n");
    scanf("%s", &answer);
    while(answer == 'Y')
    {
        printf("substarction is %d - %d = %d\n", x, y, substract);
        printf("do you want to redo the calculations ? Y or N\n");
        scanf("%s", &answer);
    }
     printf("do you want to continue? Y or N\n");
    scanf("%s", &answer);
    while(answer == 'Y')
    {
        printf("divison is %d / %d = %d\n", x, y, divide);
        printf("do you want to redo this calculation? Y or N\n");
        scanf("%s", &answer);
    }
     printf("do you want to continue? Y or N\n");
    scanf("%s", &answer);
    while(answer == 'Y')
    {
        printf("multiplication is %d * %d = %d\n", x, y, multiply);
        printf("do you want to redo this calculation? Y or N\n");
        scanf("%s", &answer);

    }


}
