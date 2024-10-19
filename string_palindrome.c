#include<stdio.h>
#include<string.h>
void main()
{
    char n1[100],n2[100];
    int len=0,i,j,rev;
    printf("enter your name");
    gets(n1);
    len=strlen(n1);
    for(i=len-1,j=0;i>=0;i--,j++)
    {
         n2[j]=n1[i];
    }
    n2[j]='\0';
    rev=strcmp(n1,n2);
    if(rev==0)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    } 
    
    printf("\n%s",n2);

}