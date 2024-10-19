#include<stdio.h>
#include<conio.h>
void main()
{
   char gender;
   int age;
  printf("enter any person gender and age:");
  scanf("%c%d",&gender,&age);
  
  if(gender=='f')
  {
     printf("\nfemale");

     if(age<=22)
    {
      printf("\nthe person not avil to create driving licence");
    }
    else 
    {
      printf("\nthe person  avil to create driving licence");
    }
  
  }
  
  else if(gender=='m')
  {
     printf("male");
      if(age<=18)
     {
        printf("\nthe person not avil create driving licence");
     }
     
    else
     {
      printf("\nthe person  avil to create driving licence");
     }
  }
getch();
}