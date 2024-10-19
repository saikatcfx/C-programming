#include<stdio.h>
//wap to read to integer x and y and swap the contants of the variable  x and y using __SIZEOF_POINTER__
// wap c program to emple, the following function- strcpy, strcat
// wap the functionality of strlen () and strcpy () using c progra.
// do not libray function
// wap to find an array elements (srea)

/* 

void main (){
    int a,b,*x=&a,*y=&b;
    printf("enter any  2 nos");
    scanf("%d%d",&a,&b);
   // fun(&a,&b;
    //b=&b;
    //a=a+b;
   // b=a-b;
   // a=a-b;

    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    printf("a is %d\n",a);
    printf("b is %d\n",b);
    
}
*/

void main()
{
    char  a[56],str[56];
    printf("enter any strings");
    gets(str);
    int i=0;
    int len=0;
    int n;
     while(str[i]!='\0')
     {

           len++;
           i++;


    }
    printf("length is %d\n",len);
    
    for(n=0;n<=len;n++){
        a[i]=str[i];
    }
     printf("%s",str);
    
}