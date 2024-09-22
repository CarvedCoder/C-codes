# include <stdio.h>
int main (void)
{
    int i,j,k,rows;
    printf("how many rows do you want?\n");
    scanf("%d",&rows);
    for(i=0;i<=rows-1;++i)
    {
        //printf("%d",i);

        for(j=1;j<=rows-i;++j)
        {
            printf("* ");
        }
        printf("\n");
        for(k=0;k<=i;++k)
        {
            printf(" ");
        }
    }




}