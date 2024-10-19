#include<stdio.h>
#include<conio.h>

void table(int *n);
void main()
{
    int n;
    printf("enter any number");
    scanf("%d",&n);
    table(&n);
    getch();
}
void table(int *n)
{
   int i;
   for(i=1;i<=10;i++)
   {
      printf("%d * %d = %d\n",*n,i,*n * i);
   }
}