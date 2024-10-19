#include<stdio.h>
int fun(int a){
    int sum=0,r=0;
    if (a==0){
       // r=a%10;
       // sum=sum+r;
       // a=a/10;
       return 0;
    }
    else {
          r=a%10;//9474%10=4//947%10=7
        //sum=sum+r;
        //a=a/10;
        return r + fun(a/10);// 4+7fun(94)
    }
    
       
    //return  fun(a/10);
    
    
}