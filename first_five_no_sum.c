#include<stdio.h>
//WAP ENTER 10 NO ANY NO FROM USER THAN CALCULATE SUM ID FIRST FIVE NO AND 
// LAST FIVE NO AND PRINT WHICH PART  IS BIG .
void main()
{
     int n[10],i,r1=0,r2=0;
     for(i=0;i<10;i++)
     {
            printf("enter  any no.");
            scanf("%d",&n[i]);
     }
     for(i=0;i<10;i++)
     {
         if (i<5)
         {
          r1=r1+n[i];
         }
         else
         {
            r2=r2+n[i];
         }
     }

     printf("%d\n",r1);
     printf("%d\n",r2);
     if(r1<r2)
     {
          printf("r2 is biger");

     }
     else
     {
          printf("r1 is biger");
     }
}