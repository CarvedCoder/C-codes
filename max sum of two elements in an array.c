#include <stdio.h>
int main(void)
{
    int x, y, z, i, max = 0, sum, j, k;
    int arr[] = {2, 4, 7, 6, 12, 32, 5, 8, 10, 50};
    z = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i <= z; i++)
    {
        for (j = i + 1; j <= z; j++)
        {
            sum = arr[i] + arr[j];

            if (max < sum)
            {
                max = sum;
                printf("%d\n", max);
            }
        }
    }
    printf("%d", max);
}