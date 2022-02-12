#include <stdio.h>
#include <stdlib.h>
 int main() 
 { 
     
  int x;  
  int i; 
  int z;
  printf("Enter the number of times to repeat the punishment phrase: \n"); 
  scanf("%d", &x);
  while (x <= 0 ) {
    printf("You entered an invalid number for punishment phrases, try again: \n");
    scanf("%d", &x);
  }
  printf("Enter the repetition line where you want to introduce the typo: \n");
  scanf("%d", &z);
  while (z <= 0 || z > x) {
    printf("You entered an invalid number for typo, try again: \n");
    scanf("%d", &z);
  }
  for (i = 0; i < x; i = i + 1) {
      if (i == z - 1) {
          printf("Progranming in c is phun! \n");
      }
      else {
          printf("Programming in c is fun! \n");
      }
    }
  return 0; 
 } 
