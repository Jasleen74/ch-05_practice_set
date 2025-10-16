//6. Write a recursive function to calculate the sum of first ‘n’ natural numbers
#include<stdio.h>

int sum_n (int);

int sum_n(int n ){
    if(n==1){
        return 1;
    }
   return sum_n(n-1)+n;
    
}
int main() {
     int a;
     printf("Enter a number : ");
     scanf("%d",&a);

     printf("The sum of first %d number is : %d",a,sum_n(a));
     

  
 return 0;
}