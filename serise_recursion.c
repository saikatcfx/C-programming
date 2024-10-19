#include<stdio.h>
// wap to enter any no. from user than print number serise //hw
void ser(int n1,int n2)
{
   if(n1>n2)
   {
     return;
   }
   else {
    printf("%d\n",n1++);
    ser(n1,n2);
   }
}
int main()
{
    int n1,n2;
    printf("enter any number ");
    scanf("%d%d",&n1,&n2);
    ser(n1,n2);
}