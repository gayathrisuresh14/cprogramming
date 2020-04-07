#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  char studentname[]= "Bhagwat";
  char school[]="Kendriya Vidyalaya";
  int age=10;
  int mark=95;
  int class=4;
  
  printf("%s is %d years old\n",studentname,age);
  printf("%s is a student of %s\n",studentname,school);
  printf("%s scored %d percentage in class %d\n",studentname,mark,class);
  return 0;
}

