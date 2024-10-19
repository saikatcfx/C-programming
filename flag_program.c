#include <stdio.h>
int main()
{
    int n1,i,flag=0;
    printf("enter any no");
    scanf("%d",&n1);
    for(i=2;i<n1;i++)
    {
       if(n1%i==0)
       {
        flag=1;
        break;
       }


    }
  if(flag==1)
  {
    printf("not prime");
  }
  else 
  {
    printf("prime");
  }

  return 0;

}