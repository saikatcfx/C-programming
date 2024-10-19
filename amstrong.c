#include<stdio.h>
#include<math.h>
void main()
{
    int r=0,sum=0,n2,n1,n,p=0;
    printf("enter any no.");
    scanf("%d",&n);
    
    n1=n;
    while(n1>0)
    {
        n1=n1/10;
        p++;
    }

    n2=n;
    for(;n2>0;)
    {
         r=n2%10; 
        sum=sum+pow(r,p);
        n2=n2/10;
    }
  // printf("%d\n",sum);

   if(n==sum)
   {
       printf("amrstrong");
   }
   else
   {
    printf("not amrstrong");

   }
}