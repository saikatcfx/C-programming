#include <stdio.h>
// wap to print average of all number from 1-50;
int main() {
    int sum = 0;
    float average;
    
    
    for(int i = 1; i <= 50; i++) 
    {
        sum=sum + i;
    }
    
    
    average = (float)sum / 50;
    
    
    printf("The average of all numbers from 1 to 50 is: %.2f\n", average);
    
    return 0;
}