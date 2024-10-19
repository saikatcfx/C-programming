#include<stdio.h>
void main()
{
    int r,c,s;
    for(r=4;r>=1;r--)
    {
       for(s=4;s>=r;s--)
        {
          printf(" ");
        }
        for(c=1;c<=r;c++)
        {
            printf("%d ",r);
        }
        printf("\n");
    }
}