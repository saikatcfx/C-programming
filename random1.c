#include<stdio.h>
// wap enter any4 digit from  user and add frist and least 
// no and between digit and show the heigest value || 
void main(){
    int n1,n2,n3,n4;
    printf("enter 4 digit :");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    int add1; 
    int add2;
    add1=n1+n2;
    add2=n3+n2;
    printf("frist addition resulty is :%d\n",add1);
    printf("second addition resulty is :%d\n",add2);
    if(add1<add2){
        printf("%d add is a heigest\n ",add2);
    }
    else{
        printf("%d add is a heigest\n ",add1);
    }

}