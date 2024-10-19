#include<stdio.h>
void sub(int *x,int *y);
void mul(int *x,int *y);
void div(int *x,int*y);
void main()
{
    int n1,n2;
    printf("enter any number");
    scanf("%d%d",&n1,&n2);
    sub(&n1,&n2);
    mul(&n1,&n2);
    div(&n1,&n2);
    
}
void sub(int *x,int *y)
{
    printf("subtract result is%d\n",*x - *y);
}
void mul(int *x,int *y)
{
    printf("multiplication result is%d\n",*x * *y);
}
void div(int *x,int *y)
{
    printf("divisionnresult is%d\n",*x / *y);
}
