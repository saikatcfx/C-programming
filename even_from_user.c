#include<stdio.h>
// wap to enter any number from user than print even number 
void  fast(int x,int y)
{
     if(x<y)
     {  
        if(x%2==0)
        {
          printf("%d\n",x);
        }
        return fast(x+1,y);
     }
     else 
     {
      
      
      return ;
     
     }

}

int main()
{
   int n1=2,n2;
   printf("enter any no.");
   scanf("%d%d",&n1,&n2);
   fast(n1,n2);
   

   
   
}
