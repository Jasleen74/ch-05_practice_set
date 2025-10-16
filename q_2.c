//2. Write a function to convert Celsius temperature into Fahrenheit.
#include<stdio.h>

float convert (float );

float convert (float x){

     float f = (float)((x *9)/5) +32;
    
    printf("%.2f celsius is: %.2f fahrenheit",x, f);
}
int main() {
     float c ;
     printf("Enter the value of celsius : ");
     scanf("%f",&c);

     convert(c);
  
 return 0;
}