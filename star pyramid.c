# include <stdio.h>
int main (void)
{
    int x,z,y;
    printf("how much height do you want ?\n");
    scanf("%d", &z);

    for(x=1; x<=z ; ++x)
    {
        for(y=1; y<=x; ++y)
        {
            printf(" * ");
        }
        printf("\n");
    }

}