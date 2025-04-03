/******************
Name:Davidi Hershkovitz
ID:214165417
Assignment:1
*******************/
#include <stdio.h>

int main() {
  
  // What bit
  printf("What bit:\n");

  int number, position;
  printf("Please enter a number:\n");
  scanf("%d",&number);
  printf("Please enter a position:\n");
  scanf("%d",&position);
  int bit = (number >> position) & 1;
  printf("The bit in position %d of number %d is: %d\n", position, number, bit);

  
  // Set bit
  printf("\nSet bit:\n");
  printf("Please enter a number:\n");
  scanf("%d",&number);
  printf("Please enter a position:\n");
  scanf("%d",&position);
  printf("Number with bit %d set to 1: %d\n", position, number | (1 << position));
  printf("Number with bit %d set to 0: %d\n", position, number & ~(1 << position));

  // Toggle bit
  printf("\nToggle bit:\n");
  printf("Please enter a number:\n");
  scanf("%d",&number);
  printf("Please enter a position:\n");
  scanf("%d",&position);
  printf("Number with bit %d toggled: %d\n", position, number ^ (1 << position) );

  
  // Even - Odd
  printf("\nEven - Odd:\n");
  printf("Please enter a number:\n");
  scanf("%d",&number);
  printf("%d\n", (number & 1) ^ 1);

  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  int number1, number2, sum;
  printf("Please enter the first number (octal):\n");
  scanf("%o",&number1);
  printf("Please enter the second number (octal):\n");
  scanf("%o",&number2);
  sum = number1 + number2;
  printf("The sum in hexadecimal: %X\n", sum);
  printf("The 3,5,7,11 bits are: %d%d%d%d\n", (sum >> 3) & 1, (sum >> 5) & 1, (sum >> 7) & 1, (sum >> 11) & 1);

  printf("Bye!\n");
  
  return 0;
}
