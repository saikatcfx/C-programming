#include<stdio.h> 
void main()
 {  
   int a,amt,i,r=0,r1=0,r2;

    printf("enter any number :\n");
    scanf("%d",&a);
    amt=a;
    if(amt>=500) //100>=500
     {
     r=amt/500;   //r=2450/500;r=4
     amt=amt%500; //2450%500=450
     printf("500 notes%d\n",r);
     }
     if(amt>=200)
     {
      r=amt/200;//r=450/200=2
      amt=amt%200;//50
      printf("200 notes %d\n",r);
     }
      if(amt>=100)
     {
      r=amt/100;
       amt=amt%100;
      printf("100 notes%d\n",r);
     }
     if(amt>=50){
      r=amt/50;
      amt=amt%50;
      printf(" 50 notes%d\n",r);
     }

    
   // printf("%d",r);
   // printf("%d\n",r1);

   
 }

      




