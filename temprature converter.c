#include <stdio.h>
float celsius(float fahrenheit,float x);
float kelvin(float fahrenheit,float x);
int main(void)
{
    float fahrenheit,x;
    int y;
    printf("which converter would you like to use\ntype 1 for fahrenheit to celsius\ntype 2 for fahrenheit to kelvin\n");
    scanf("%d",&y);
    if (y==1)
    {
      celsius(fahrenheit,x);
    }
    if (y==2)
    {
      kelvin(fahrenheit,x);
    }


}
 float celsius(float fahrenheit,float x)
 {
   printf("value of fahrenheit\n");
   scanf("%f",&fahrenheit);
   x= (fahrenheit-32)*5/9;
   printf("the %.2f fahrenheit is %.2f celsius",fahrenheit,x);
 }
 float kelvin(float fahrenheit,float x)
 {
    printf("value of fahrenheit\n");
    scanf("%f",&fahrenheit);
   x=(fahrenheit-32)*5/9+273.15;
    printf("the %.2f fahrenheit is %.2f kelvin\n",fahrenheit,x);
 }