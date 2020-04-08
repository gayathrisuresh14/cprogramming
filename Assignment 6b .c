#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int n;
  printf("Enter a number:");
  scanf("%d", &n);
  do{
    printf("%d\n",n);
    n--;
  } while (n>=0);
  return 0;
}