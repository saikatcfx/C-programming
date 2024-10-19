#include<stdio.h>
#include<string.h>
 //  wap to  enter wordany sentence from user than calculat total number of word
void main()
{
    char n1[100];
    int len=0,i,sp=0;
    printf("enter  any sentence");
    gets(n1);
    len=strlen(n1);
    for(i=0;i<len;i++)
    {
       if(n1[i]==' ' )
       {
          sp++;
       }
       
    }
     printf("%d",sp+1); 
}
 