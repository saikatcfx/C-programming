#include<stdio.h>
#include<conio.h>
int main()
{
 int n,r,digit=4, sum1=0, sum2=0;      
  printf("Enter any 4 digit no: "); 
  scanf("%d",&n);
while (digit!=0)
{
r=n%10;
if (digit==4 || digit==1)
{
sum1+=r;
}

n=n/10;
digit--;
}
printf("%d",sum1);
}