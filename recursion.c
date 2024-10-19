#include<stdio.h>
int sum(int n)
{
     
   if(n==0)
   {
    return 0;
   }
   else 
   {
     
     
     return n+sum(n-1);
  
   }
   
}
int main()
{   int total;
    total=sum(10);
    printf(" total result is%d\n",total);
    return 0;
}