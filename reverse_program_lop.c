#include<stdio.h>
int main()
{
    int n1,rev=0;
    printf("enter any number :");
    scanf("%d",&n1);
    while(n1!=0)
    {
        rev=rev*10;
        rev=rev+(n1%10);
        n1=n1/10;
        
    }
    printf("reverse value is %d",rev);
    return 0;
}