# include <stdio.h>
int main(void)
{
    char x,y,z,a;
    printf("the amount of alphabets in the pyramid?\n");
    scanf("%c", &z);
    for(x=a;x<=z;++x)
    {
        for(y=a;y<=x;++y)
        {
            printf("%c",&y);
        }
        printf("\n");
    }
}