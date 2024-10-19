#include<stdio.h>
#include<string.h>
void main()
{
    char str[50];
    printf(" enter any string ");
    gets(str);
     int len ,i,j,omil;
     len=strlen(str);
     for(i=0,j=len-1;i<=len/2;i++,j--)
    {
        if(str[i]!=str[j])
        {
            omil=1;
            break;
        }
     }
     if(omil==1)
     {
        printf("p");
     }
     else
     {
        printf("n");
     }
}