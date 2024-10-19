
#include<stdio.h>
#include<conio.h>

void main(){
    int r=0,sum=0,n,n1;
   // int rev=1;
    printf("enter any no.");
    scanf("%d",&n);

   
     n1=n;
    while(n!=0){
        int rev=1;
        r=n%10;
        
    for(int i=1;i<=r;i++)
    {
        rev=rev*i;
        
    }
     sum=sum+rev;
        n=n/10;

}
    printf("%d\n",sum);
    if(n1==sum)
    {
        printf("krishnamurty");

    }
    else
    {
        printf(" not krishnamurty no.");
        
    }
        
}   