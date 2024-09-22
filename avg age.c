#include <stdio.h>
int main(void)
{
     int sum;
     float avg;
    int ages[]={20,22,18,35,48,26,87,70};
    float x= sizeof(ages)/sizeof(ages[0]);
    for(int i;i<x;i++)
    {
        sum+=ages[i];
    }
    avg=sum/x;
      printf("so the average age is %.2f\n",avg);
}
