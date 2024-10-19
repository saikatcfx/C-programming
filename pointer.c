#include<stdio.h>
int fun(int *a,int *b){
    if(*a>*b){
        printf("%d is a largest\n ",*a);
        printf("%d is a smallest\n ",*b);

    }
    else{
        printf("%d is largest\n",*b);
        printf("%d is a smallest\n ",*a);
    }
}
int main()
{
     int a,b;
     printf("enter anny 2 no.:");
     scanf("%d%d",&a,&b);
     fun(&a,&b);

     return 0;
}