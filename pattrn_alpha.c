#include<stdio.h>
void main(){
      int r,s,c;
    //   char a='A';
      for(r=1;r<=5;r++){
        for(s=4;s>=r;s--){
            printf(" ");
        }
        char a='A';
        for(c=1;c<=r;c++){
            printf("%c ",a);
            a++;
        }
        printf("\n");
      }
}


// #include<stdio.h>
// void main(){
//       int r,s,c;
//       for(r=1;r<=5;r++){
//         for(s=4;s>=r;s--){
//             printf(" ");
//         }
//         for(c=1;c<=r;c++){
//             printf("%c ",r+64);
//         }
//         printf("\n");
//       }
// }


