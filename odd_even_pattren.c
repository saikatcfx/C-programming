#include<stdio.h>
void main()
 {
    int r,c,s;
    for(r=1;r<=5;r++)
    {
        for(s=4;s>=r;s--)
        {
            printf("");
        }
        for(c=1;c<=r;c++)
        {
            if(r%2!=0)
            {
                printf("*\t");
            }
            else
            {
                printf("%d\t",c);
            }
        }
        printf("\n");
    }
    
 }