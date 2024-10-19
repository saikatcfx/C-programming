#include<stdio.h>
void main()
{
    int a, b,lcm=0,hcf=0;
    int i;
    printf("enter 2 numbers");
    scanf("%d%d",&a,&b);
    
    for(i=1;i<=b;i++)
    {
        if((a*i)%b==0)
        {
             printf("lcm is a:%d",a*i);
             break;
        }
    }
     //  lcm=(a*b)/hcf;
      // printf("%d\n",lcm);
}