# include <stdio.h>
# include <string.h>
struct structure1
{
    int number;
    char string[50];
};
int main(void)
{
    struct structure1 s1;
    s1.number=12;
    strcpy(s1.string,"My name is Shreyans Behera");
    printf("%s and i have passed class %dth\n",s1.string,s1.number);

}