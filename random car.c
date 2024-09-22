# include <stdio.h>
# include <stdlib.h>
# include <time.h>
struct car
{
    char brand[50];
    char model[50];
    int year;
};
int main(void)
{
    struct car car1 = {"BMW", "X5", 1999};
    struct car car2 = {"Ford", "Mustang", 1969};
    struct car car3 = {"Toyota", "Corolla", 2011};
    srand(time(0));
    int x = (rand()%3)+1;
   // printf("%d\n",x);
    
    if(x==1)
    {
        printf("%s %s %d\n", car1.brand, car1.model, car1.year);
    }
    if(x==2)
    {
        printf("%s %s %d\n", car2.brand, car2.model, car2.year);
    }   
    if(x==3)
    {
        printf("%s %s %d\n", car3.brand, car3.model, car3.year);
    }
}
