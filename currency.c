#include<stdio.h>
int main()
{

  int cur[10]={2000,500,200,100,50,20,10,5,2,1};
  int n,i,amt;
   printf("enter any amount");
   scanf("%d",&amt);

   for(i=0;i<10;i++)
   {  if(amt>=cur[i])
     {
        n=amt/cur[i];
         printf("notes  %d is %d\n ",cur[i],n);
     
         amt=amt%cur[i];
      } 
   }

    return 0;

}































