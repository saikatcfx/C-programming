#include <stdio.h>
//Compiler version gcc  6.3.0

int main()
{
  int n1,n2,temp;
  printf("enter any 2nos number ");
  scanf("%d%d",&n1,&n2);
  temp=n1;
  n1=n2;
  n2=temp;
  printf("vule of n1 %d\n",n1);
  printf("vule of n1 %d\n",n2);
  return 0;
}