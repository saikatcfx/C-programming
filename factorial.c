#include<stdio.h>
int multiply(int  n1);
void main()     
{
   int n1, m;
   printf("enter any no. ");
   scanf("%d",&n1);
   m=multiply(n1);
   printf("%d\n",m);

}

int multiply(int n1)
{    
    
    if(n1==1)
    {
       return 1;
    }
    else
    {  
      return n1*multiply(n1-1);
    
    }
}
