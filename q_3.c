/*3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
earth. Consider g = 9.8m/s2.*/


#include<stdio.h>

 float force (float);
 
 float force (float x ){
    float f  = x * 9.8;
    printf("Force on body of mass %.2f is : %.2f m/s^2",x,f);
 }
 int main() {
     float m ;
     printf("Enter the value of mass : ");
     scanf("%f",&m);

     force(m);
  
 return 0;
}