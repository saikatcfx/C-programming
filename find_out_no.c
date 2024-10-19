#include<stdio.h>
void main()
{

       int a[10]={20,100,500,27,3,430,7,2,4,50};
       int b;
       int i;
      int  flag=0;
       printf("enter any number");
       scanf("%d",&b);
       for(i=0;i<=10;i++)
       {
          if(a[i]==b)
          {
               printf("found");
               flag=1;
               
          }
          
       }
       if(flag==1){
        printf("found");
       }
       else{
        printf("not  found");
       }

  

}