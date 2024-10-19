#include<stdio.h>
void main(){
    int a[10];
    int i;
    for(i=0;i<10;i++){
          printf("enter any no:");
          scanf("%d",&a[i]);
    }
    printf("even part:\n");

    for(i=0;i<10;i++){
        if(a[i]%2==0){
            printf("%d\n",a[i]);
        }
    }
    printf("odd part:\n");
     for(i=0;i<10;i++){
        if(a[i]%2!=0){
            printf("%d\n",a[i]);
        }
    }
}
/* 
if(n<=100){
        b=500;

    }
    else if(n<=200){
        b=500+(n-100)*6;
    }
    else if(n<=300){
        b=500+600+(n-200)*6;
    }
    else if(n<=400){
        b=500+600+650+(n-300)*7.5;
    }
    else {
        b=500+600+650+750+(n-400)*9;
    }
    printf("%.2f",b);
*/