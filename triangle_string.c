#include<stdio.h>
#include<string.h>  // wap to enter any name from user than than print triangle
void main()
{
     char n1[100];
     int len;
     int r,c;
     printf("enter your name");
     gets(n1);
     len=strlen(n1);
     
     for(r=0;r<len;r++)
     {
           for(c=0;c<=r;c++)
           {
               printf("%c",n1[c]);
           }
           printf("\n");
     }



}