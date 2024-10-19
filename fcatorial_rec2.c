#include<stdio.h> //wap to find the fcatorial value 
int fun(int n){
    if(n==1){
        return 1;
    }
    else {
        return n * fun(n-1);
    }
}
int main(){
    int n;
    int f;
    printf("enter any number :");
    scanf("%d",&n);
    f=fun(n);
    printf("%d factorial is \n",f);
    return 0;
}