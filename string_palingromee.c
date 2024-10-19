#include <stdio.h>

int main() {
    int n, first, second;
    int sum1=0,r=0,sum2=0;
 
    printf("Enter a four-digit number: ");
    scanf("%d", &n);

      first = n / 100;
      second = n % 100;

   // printf("First part: %d\n", first);
   // printf("Second part: %d\n", second);

    while(first!=0){
        r=first%10;
        sum1=sum1+r;
        first=first/10;
    }
    printf("first part addition result is %d\n",sum1);

    while(second!=0){
        r=second%10;
        sum2=sum2+r;
        second=second/10;

    }
    printf("second part addition result is %d\n",sum2);
    if(sum1<sum2){
        printf("%d second part is big\n",sum2  );
    }
    else {
        printf("%d first part is big\n",sum1  );
    }

} 