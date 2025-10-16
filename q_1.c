//1. Write a program using function to find average of three numbers.
#include<stdio.h>
 float avg(int,int,int);


 float avg (int x, int y ,int z){
   float average = (float) (x+y+z)/3;
    printf("The average of %d,%d,%d is : %.2f",x ,y,z ,average);
    return (average);
 }

int main() {
     int a;int b ; int c ;
     
     printf("Enter the value of a : ");
     scanf("%d",&a);

     printf("Enter the value of b : ");
     scanf("%d",&b);

     printf("Enter the value of c : ");
     scanf("%d",&c);

     avg(a,b,c);
  
 return 0;
}


