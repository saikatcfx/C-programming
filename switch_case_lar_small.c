#include<stdio.h>
int main () // wap to show the higest number from user given numbe
{    int n1,n2,n3;
     printf("enter three number:\n");
     scanf("%d%d%d",&n1,&n2,&n3);
     switch (n1>n2 && n1>n3) // n1 is largest number {--to end}
     {
       case 1: printf("n1 is a largest no\n"); // other number is asmaller
       switch (n2>n3) // b,c is a SMALLER 
       {
        case 1: 
        printf(" n3is is a smallar\n");
        case 0:
        printf("n2 is a smaller\n");
       }
    
       break; // break  ****

        
        
        case 0: switch(n2>n1 && n2>n3) //notice start case 0 :--then switch{--end to before n1 er }
        {
          case 1: 
          printf("n2 is alargest number\n ");

          switch(n2>n3) // smaller other no.
          {
            case 1 :
            printf("n3 is a samller number\n");
            case 0:
            printf("n2 is a smaller number\n ");
          }
        
       break ;
         case 0: switch(n3>n1 && n3>n2) // again start case 0 then switch{---end to before n1}
        {
          case 1: 
          printf("n3 is alargest number \n");

          switch(n2>n3) // other smaller 
          {
            case 1 :
            printf("n3 is a samller number\n");
            case 0:
            printf("n2 is a smaller number\n ");
        
         
          }
        }
      }


       
     }  
// every switch start 
// switch(condition)
//{
// case 1: 
// case 0:
//}
      /*
      multiple // nested conditon switch start as a-
      switch( condition)
     {
        case 1:
        some code 
        case 0 : some code 
        switch(conditon)
        {
          case 0: some code 
          case 1: some code 
        }
        brake;
        case0:switch(condition)
        {
          case 1:    some code 
          case 0: some code 
          //nested 
          switch(condition)
          {
            case 1: some code 
            case 0: siome code 
          }
        }
     }

      }
     */
    return 0;
}