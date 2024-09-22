#include <stdio.h>
int main(void)
{
FILE *fptr;
fptr = fopen("introduction.txt","r");
char introduction[100];
if (fptr!= NULL)
{
while(fgets(introduction,100,fptr))
{
    printf("%s",introduction);
}
}
else
{
    printf("the file could not be found");
}
printf("\n");
fclose(fptr);
}


