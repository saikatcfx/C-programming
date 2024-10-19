#include<stdio.h>
void main()
{
    int a;
    float b=0;
    printf("enter your meter unit :");
    scanf("%d",&a);
    if (a<=100)
    {    
        b=500;
      
    }
    else if (a<=200)
    {
           b=(500+(a-100))*6;

    }
    else if(a<=300)
    {
        b=(500+600+(a-100))*6.5;
    }
    else if(a<=400)
    {
        b=(500+600+650+(a-100))*7.5;
    }
    else {
        b=(500+600+650+750+(a-100))*9;
        
    }

    printf("bill is %.2f",b);
     
     
}