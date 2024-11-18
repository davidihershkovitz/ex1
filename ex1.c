/******************
Name:Davidi Hershkovitz
ID:214165417
Assignment:1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit
  printf("What bit:\n");

  int number, position;
  printf("Please enter the number of your choice:");
  scanf("%d",&number);
  printf("Please enter the position:");
  scanf("%d",&position);
  int bit = (number >> position) & 1;
  printf("the bit in position %d of the number %d is: %d\n", position, number, bit);

  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  
  // Set bit
  printf("\nSet bit:\n");
  printf("Please enter the number of your choice:");
  scanf("%d",&number);
  printf("Please enter the position:");
  scanf("%d",&position);
  printf("The number %d with bit %d set to 1 is:%d\n", number, position, number | (1 << position));
  printf("The number %d with bit %d set to 0 is:%d\n", number ,position, number & ~(1 << position));
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */

  // Toggle bit
  printf("\nToggle bit:\n");
  printf("Please enter the number of your choice:");
  scanf("%d",&number);
  printf("Please enter the position:");
  scanf("%d",&position);
  printf("The number %d with bit %d toggled is:%d\n", number, position, number ^ (1 << position) );
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  printf("Please enter the number of your choice:");
  scanf("%d",&number);
  printf("%d\n", (number & 1) ^ 1);
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  long number1, number2, sum;
  printf("Please enter an octal number of your choice:");
  scanf("%o",&number1);
  printf("Please enter another octal number of your choise:");
  scanf("%o",&number2);
  sum = number1 + number2;
  printf("The sum in hex is:%x\n", sum);
  printf("the 3,5,7,11 bits are:%d%d%d%d\n", (sum >> 3) & 1, (sum >> 5) & 1, (sum >> 7) & 1, (sum >> 11) & 1);
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  printf("Bye!\n");
  
  return 0;
}
