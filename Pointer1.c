#include<stdio.h>
// wap program to enter any no. from user than print big and small no.
//
int fun(int *a,int *b){
    (*a>*b)?printf("%d is a largest\n ",*a):printf("%d is a largest\n ",*b);
}
int main()
{
     int a,b;
     printf("enter anny 2 no.:");
     scanf("%d%d",&a,&b);
     fun(&a,&b);

     return 0;
}