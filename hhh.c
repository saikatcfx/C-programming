#include<stdio.h>
#include<conio.h>
void getch(int a){
    a=5;
    printf("%d",a);
}
void main()
{
  //clrscr();
  int a;
  printf ("enter any no");
   scanf ("%d",&a);
  getch(a);
}

