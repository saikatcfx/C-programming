#include<stdio.h>
int main()
{   
    int n1,fac=1,i;// this the logical error beacause fac=0;
    printf("enter any number");
    scanf("%d",&n1);
    for(i=1;i<=n1;i++)
    {
          fac=fac*i;

    }
   printf("factorials are : %d",fac);

    return 0;
}
/*

 1*0=0
 2*0=0
 3*0=0
 4*0=0

 .. so fac is fac=1
*/