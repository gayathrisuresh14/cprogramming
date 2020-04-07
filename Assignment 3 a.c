#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  char name[20];
  int mark1;
  int mark2;
  int mark3;
  int mark4;
  int mark5;
  
  printf("Enter your name:");
  fgets(name,20,stdin);
  printf("Your name is %s",name);
  printf("Enter first mark:");
  scanf("%d",&mark1);
  printf("Enter second mark:");
  scanf("%d",&mark2);
  printf("Enter thrid mark:");
  scanf("%d",&mark3);
  printf("Enter fourth mark:");
  scanf("%d",&mark4);
  printf("Enter fifth mark:");
  scanf("%d",&mark5);
  printf("Answer=%d",(mark1+mark2+mark3+mark4+mark5)/5);
  
  return 0;
}

