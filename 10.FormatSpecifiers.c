/*

Format Specifiers
Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing. It is basically a placeholder for the variable value.

A format specifier starts with a percentage sign %, followed by a character.

For example, to output the value of an int variable, use the format specifier %d surrounded by double quotes (""), inside the printf() function:

*/

#include <stdio.h>

int main ()
{

  int num = 15;
  printf ("%d \n" ,num);
  float num2 = 5.22;
  printf("%f \n", num2);
  char letter = 'S';
  printf("%c \n", letter);

}