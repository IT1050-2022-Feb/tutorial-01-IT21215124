/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1 = 0, mark2 = 0;
  float avg;

  printf("Enter the 1st mark :");
  scanf("%d", &mark1);
  printf("Enter the 2nd mark :");
  scanf("%d", &mark2);

  avg = (float)(mark1 + mark2)/2;

  printf("average mark is :%.2f", avg);




  
  return 0;
}

