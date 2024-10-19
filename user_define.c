#include<stdio.h> 
void large(int a,int b);
int main()
{
   int n1,n2;
   printf("enter any number");
   scanf("%d%d",&n1,&n2);
   large(n1,n2);
   return 0;
}
void large(int a ,int b)                                         
{
   
   if(a<b)
   {
      printf("b is big number%d\n",b);
      printf("a is a small number%d\n",a);
   }

   else 
   {
    printf("b is a small number%d\n",a);
    printf("a is a big number%d\n",b);
   }
}