#include <stdio.h>
int main (void)
{
    float x;
    float y;
    float sum;
    float divide;
    float multiply;
    float substract;
    char answer,answer1;
    printf("do you want to use the calculator? Y or N\n");
    scanf("%s", &answer);
    if( answer == 'Y')
        { 
            printf("Which opreation you want to do?\n + ,- ,*,/\n");
            scanf("%s", &answer1);
        
                if (answer1 == '+')
                   {
                    printf("\nplease enter value of x\n");
                    scanf("%f", &x);
                    printf("\nplease enter value of y\n");
                    scanf("%f", &y);
                    sum = x + y;
                    printf("the sum of these numbers %f + %f are %f\n", x, y, sum);
                   }
                else if(answer1 == '-')
                   {
                        printf("\nplease enter value of x\n");
                        scanf("%f", &x);
                        printf("\nplease enter value of y\n");
                        scanf("%f", &y);
                        substract=x-y;
                        printf("the substraction of these numbers %f - %f are %f\n", x, y, substract);
                    }
                else if(answer1 == '/')
                    {    
                        printf("\nplease enter value of x\n");
                        scanf("%f", &x);
                        printf("\nplease enter value of y\n");
                        scanf("%f", &y);
                        divide = x/y;
                        printf("the division of these numbers %f / %f are %f\n", x, y, divide);
                    }
                else if(answer1 == '*')
                     {       
                        printf("\nplease enter value of x\n");
                        scanf("%f", &x);
                        printf("\nplease enter value of y\n");
                        scanf("%f", &y);
                        multiply=x*y;
                        printf("the multiplication of these numbers %f * %f are %f", x, y, multiply);
                     }                   
                else
                    printf("nothing selected\n");
                
        }
        else
            printf("Goodbye\n");
}
        


