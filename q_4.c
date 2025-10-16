//Write a program using recursion to calculate nth element of Fibonacci series.  
#include<stdio.h>

// fibonacci series is 0 , 1 , 1 , 2 ,  3 , 5 , ........ sum of last two terms

 int fibonacci (int);

 int fibonacci (int n ){
    if (n==1 || n == 2){
        return n-1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
 }
int main() {
    int a ;
    printf("Enter the value for nth term : ");
    scanf("%d",&a);

    printf("the value of the series at %d is  : %d ",a,fibonacci(a));
     
  
 return 0;
}

