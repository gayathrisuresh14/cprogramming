#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int n,i;
  printf("Enter a number:");
  scanf("%d", &n);
  for(i=1;i<=10;i++){
    printf("%d*%d=%d\n",n,i,n*i);
  }
  return 0;
}