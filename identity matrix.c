#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int a[10][10];
  int i=0,j=0,r=0,c=0,flag=0;
  
  printf("Enter the number of rows and coloumns\n");
  scanf("%d%d",&r,&c);
  printf("Enter elements of the matrix:\n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
     scanf("%d",&a[i][j]); 
    }
  }
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      if(i==j && a[i][j]!=1){
        flag=1;
        break;
      }
      else if(i!=j && a[i][j]!=1){
        flag=1;
        break;
      }
      
     }
   }
   if(flag==0){
     printf("It is an Identity Matrix.");
   }
   else{
     printf("It is not an Identity Matrix");
   }
  return 0;
}