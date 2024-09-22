#include <stdio.h>
int main(void)
{
    int i, j, k, rows;
    printf("how many rows do you want?\n");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i)
    {
        for (j = 1; j <= rows - i; ++j)
        {
            printf(" ");
        }
        for (k = 1; k <= i; ++k)
        {
            printf("* ");
        }
        printf("\n");
    }
}
