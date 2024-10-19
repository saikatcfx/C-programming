#include<stdio.h>
struct student{
    int roll;
    char name[25];
    int age;
};

int main()
{
    struct student s1,s2,s3;

    printf("enter roll 1st student:");
    scanf("%d",&s1.roll);

    fflush(stdin);
   
     printf("enter name 1st student");
     gets(s1.name);

     printf("ener age of 1st student");
     scanf("%d",&s1.age);

     printf("roll :%d\n",s1.roll);
     printf("name :%s\n",s1.name);
     printf("roll :%d\n",s1.age);
}