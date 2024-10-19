#include<stdio.h>
int main()
{
     int n1,n2,i,hcf;
     printf("enter ay number ");
     scanf("%d%d",&n1,&n2);
     for(i=1;i<=n1;i++)
     {
          if(n1%i==0 && n2%i==0)
          {
            hcf=i; // heigest or greatest common factors //
          }
     //  printf("hcf is :%d\n",hcf);

     }
    printf("hcf is :%d",hcf);
}