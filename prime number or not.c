#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{ 
  int i,n,flag=1;
  printf("Enter a positive integer:");
  scanf("%d",&n);
  for(i=2;i<=n/2;i++){
    if(n%i==0){
      flag=0;
      break;
    }
  }
  if(n==1){
    printf("1 is neither a prime nor a composite number.");
  }
  else
  {
    if(flag==1)
    printf("%d is a prime number.",n);
    else
    printf("%d is not a prime number.",n);
  }
  return 0;
}