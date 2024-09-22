#include <stdio.h>
#include <math.h>
int main ()
{
// Principal amount 
  double principal = 10000;  
  
  // Annual rate of interest 
  double rate = 5;  
  
  // Time 
  double time ,Amount,CI;  
  printf("enter time :\n");
  scanf("%lf",&time);
  
  // Calculating compound Interest 
   Amount = principal *  
                  ((pow((1 + rate / 100),  
                    time))); 
   CI = Amount - principal; 
   
  printf("Compound Interest is : %lf",CI); 
  return 0; 

}