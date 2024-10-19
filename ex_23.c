#include<stdio.h>
void main()
{
  int n1[10],i,lar;
  printf("enter any no.");
  for(i=0;i<10;i++)
  {
      scanf("%d",&n1[i]);
  }
  for(i=0;i<10;i++)
  {
      if(i==0)
      {
         lar=n1[i];
      }
      else if(n1[i]>lar)
      {
          lar=n1[i];
      }
   
  }
  printf("big number is%d",lar);
  

}