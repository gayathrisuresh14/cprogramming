#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  double profit;
  double rate;
  double timeperiod;
  printf("Enter profit:");
  scanf("%lf",&profit);
  printf("Enter rate:");
  scanf("%lf",&rate);
  printf("Enter timeperiod:");
  scanf("%lf",&timeperiod);
  printf("Simple interest=%f",(profit*rate*timeperiod)/100);
  return 0;
}

