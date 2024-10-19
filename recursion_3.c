#include<stdio.h>

void fun(int n)
{
    
    if (n>10)
    {
        return;
    }
    else
    {   
        printf("%d\n",n++);
        fun(n);
    }
}

int main()
{    
      fun(1);
      return 0;
}