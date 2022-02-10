/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()
{
  int m1,m2;
  int sum;
  float avg;
  
  printf("Enter the Subject 1 marks: ");
  scanf("%d",&m1);
  
  printf("Enter the Subject 2 marks: ");
  scanf("%d",&m2);

  sum=m1+m2;

  avg=sum/2;

  printf("The average is: %.2f",avg);

  return 0;
}

