#include<stdio.h>
// wap to enter any no. from yser than print multiplication table;//hw
void table(int x,int n)
{     
    
      
      if(n>10)
      {
        return;
      }
      else 
      {
        
        
        printf("%d*%d=%d\n",x,n,n*x);
          
          
          return table(x,n+1);

        
      }
}
int main()
{
    int n1,y=1;
    printf("enter any numer ");
    scanf("%d",&n1);
    table(n1,y);
    
}
