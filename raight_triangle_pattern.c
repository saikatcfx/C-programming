#include<stdio.h>
// wap to display any right triangle '*' print of size 5*5;
int main() {

  int r,c,s;
  for(r=1;r<=5;r++)
  {  
     //for(s=4;s>=r;s--){
       // printf(" ");
     //}
      for(c=1;c<=r;c++)
      {
        printf("*\t");
      }
      printf("\n");
  }

    return 0;
}