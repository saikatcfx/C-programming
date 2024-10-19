#include <stdio.h>
struct student
{
  char name[100];
  int roll;
  int age ;
};

int main()
{
  struct student s[3];
  int i;
  
  for(i=0;i<3;i++)
  {
    
    

    fflush(stdin);

    printf("enter  name:");
     scanf("%[^\n]s",s[i].name);
    
    
    printf("enter  age :");
    scanf("%d",&s[i].age);
    
    printf("--------------\n");
    
       //printf("name %s\n",s[i].name);
       printf("roll %d\n",s[i].roll);
       printf("name %s\n",s[i].name);
       printf("age %d\n",s[i].age);
  
    
    
  }
  
   //another way
   /*
    for(i=0; i<3 ;i++)
  {
     printf("name %s\n",s[i].name);
     printf("%d\n",s[i].roll);
     printf("%d\n",s[i].age);
  
   } 


   */
  
 
  return 0;
}