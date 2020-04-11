#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  char str[10];
  int i,c=0;
  
  printf("\n Enter a string");
  gets(str);
  for(i=0;str[i]!='\0';i++) 
  c++;
  printf("\nstring Reverse\n");
  for(i=c-1;i>=0;i--)
  printf("%c",str[i]);
  return 0;
}