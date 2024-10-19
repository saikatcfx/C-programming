#include<stdio.h>
#include<math.h>
// sum and user define finction
// wap to input five number ftom user than sort them  in ascending oder .


void main(){

  int i,n[5],j,temp;
   
  for(i=0;i<5;i++)
  {
    printf("enter any  no.");
       scanf("%d",&n[i]);
  }
  for(i=0;i<=5/2;i++)
  {
      for(j=0;j<5-i;j++)
      {
           if(n[j]>n[j+1]){
            temp=n[j];
            n[j+1]=n[j];
            n[j]=temp;
           }
      }

    }
    for(i=0;i<5;i++)
  {
    
      printf("%d\t",n[i]);
  }


  }