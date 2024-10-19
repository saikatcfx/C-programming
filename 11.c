#include<stdio.h>
void table(int a);
int main()
{  
    int n;
    printf("enter any number");
    scanf("%d",&n);
    table(n);
    
    return 0;
}

void table(int a)
{    
    int i;
    for(i=1;i<=10;i++)
    {
       printf("%d*%d=%d\n",a,i,a*i);
    }
 // printf("%d",p);
}  
  