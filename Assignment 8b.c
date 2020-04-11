#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{ 
  char str[10];
  int i,c1=0,c2=0,c3=0;
  printf("\nEnter a string");
  gets(str);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
    c1++;
    else if(str[i]>='0' && str[i]<='9')
    c2++;
    else
    c3++;
  }
  printf("\nAlphabets=%d",c1);
  printf("\nDigits=%d",c2);
  printf("\nSpecial Characters=%d",c3);
  return 0;
}