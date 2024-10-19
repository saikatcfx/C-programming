#include <stdio.h>
// strings lower casae to upper casae usings array variable ;
void main()
{
  char a[30];
  printf("enter ypur name :");
  gets(a);
  char b[30];
  int j, i, count = 0;
  while (a[j] != '\0')
  {
    j++;
    count++;
  }
  for(i=0;i<=count;i++){
         b[i]=a[i];
  }
  printf("%s",b);
  
}

//++a;

// printf("\n");

/*  else {
  for(c=5;c>=r;c--)
  {

      printf("%c ",a);
      ++a;
}
*/
/*
#include<stdio.h>
void main(){
    int n,i,r=0,sum=0,n1;
    printf("enter  any input:");
    scanf("%d",&n);
    n1=n;
    while(n!=0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    printf("%d\n",r);
    if(r==n1){
        printf("%d is a palindrom",n1);
    }
    else
    {
       printf("%d is not a palindrom",n1);
    }

*/
/*
#include<stdio.h>
void main(){
    char c;
    printf("enter  any input:");
    scanf("%c",&c);
    if(c>='a' &&c<='z')
    {
      printf("it is a alphabet");
    }
    else if(c>=0 && c<=10){
     printf("it is a digit");
    }
    else
     {
        printf("symbol");
    }
}
*/
/*
#include<stdio.h>
void main(){
    int i,n1,n2;
    printf("enter any 2no:");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    {
      for(i=n1;i>=n2;i--){
        printf("%d\n",i);
      }
    }
    else
     {
        for(i=n1;i<=n2;i++){
        printf("%d\n",i);
     }
    }
}
*/