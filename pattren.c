#include<stdio.h>
int main()
{
   int r,c;
   for(r=1;r<=5;r++)
   {
      for(c=1;c<=r;c++)
      {
       printf("%d",r);
      }
      printf("\n");
   }
  return 0; 
}

/*
#include<stdio.h>
 int main()
 {  
    int c,d;
    for(c=5;c>=1,c--)
    {
       for(d=1;d<=c;c++)
       {
           printf("%d\n",c);
      
       }
       printf("\n");
       return 0;
    }  
}  
*/