#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int i,j,m,n,a[3][3];
  clrscr();
  
  printf("Enter order of matrix:\n");
  scanf("%d%d",&m,&n);
  printf("Enter matrix elements:\n");
  for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  scanf("%d",&a[i][j]);
  printf("\nTranspose of matrix:\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    printf("%d",a[j][i]);
    printf("\n");
  }
  getch();
  
}