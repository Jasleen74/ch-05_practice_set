/*5. What will the following line produce in a C program:
int a = 4;
printf("%d %d %d \n", a, ++a, a++);*/
#include<stdio.h>
int main() {
     int a = 4;
printf("%d %d %d ", a , ++a , a++);  // beacuse in printf when we have the same value then the evaluation order is right to left 
  
 return 0;
}