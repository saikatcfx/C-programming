#include<stdio.h>
void main()
{
    FILE *fp;
    char name[50];
    int age ;
     
     printf("enter your name :\n");
     gets(name);

     printf("enter your age:\n");
     scanf("%d",&age);

     fp=fopen("myfilecfx.text","a");

     if(fp==NULL)
     {
        printf("unable to create a function :");
     }
     else 
     {
        fprintf(fp,"%s  %d",name,age);
        fclose(fp);
     }
}