#include<stdio.h>
#include<conio.h>
 int mu(int n1,int n2)
 {
   return n1*n2;
    
 }
 int sum(int n1,int n2)
 {
   return n1+n2;
 }
 int div(int n1,int n2)            //
 {
    return n1/n2;
 }
 int sub( int n1,int n2)
 {
    return n1-n2;
 }
int main()
{
   int n1,n2,c,d,f,g;
   printf("enter any number");
   scanf("%d%d",&n1,&n2);
   c=mu(n1,n2);
   d=sum(n1,n2);
   f=div(n1,n2);
   g=sub(n1,n2);
    printf("result is %d\n",c);
    printf("%d is ans\n",d);
    printf("%d is ans\n",f);
    printf("%d is ans\n",g); 
   getch();
    

    return 0;
}