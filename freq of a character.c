#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  char str[100],chara;
  int count=0;
  printf("Enter a string:");
  gets(str);
  printf("Enter a character to find its frequency:");
  scanf("%c",&chara);
  for(int i=0;str[i]!='\0';i++){
    if(chara==str[i])
    count++;
  }
  printf("Frequency of %c=%d",chara,count);
  return 0;
}