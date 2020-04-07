#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int age;
  printf("Age of the person:");
  scanf("%d", &age);
  if(age>=60){
    printf("Pension amount is Rs.10000");
  }else if (age>=50){
    printf("Pension amount is Rs.5000");
  }else{
    printf("No Pension");
  }
  
  return 0;
}