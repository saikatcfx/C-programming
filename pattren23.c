#include<stdio.h>
void main(){
    int r,c,s;
    char a='A';
    for(r=1;r<=5;r++){
    
        for(s=4;s>=r;s--)
        {
            printf(" ");
        }
    
          for(c=1;c<=r;c++)
            {
                 printf("%d ",c);
            }
           printf("\n");
    }
}