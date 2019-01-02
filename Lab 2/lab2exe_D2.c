/*
 *
 * lab2exe_D2.c
 * ENSF 337 - Lab 2 - Execise D - Part II
 *  This program lets you examine the behaviour of simple scanf calls
 *  in response to input errors.
 */

#include <stdio.h>

int main(void)
{
  int i = 333;
  double d = 1234.5;
  int n;

  printf("Please enter an integer followed by a double: ");
  n = scanf("%d%lf", &i, &d);
  printf("n is %d.\n", n);
  printf("i is %d.\n", i);
  printf("d is %f.\n", d);

  return 0;
}
/*
input       output
12 0.56     2 12 0.56
5.12 9.56   2 5 0.12
12 ab       1 12 1234.5
ab 12       0 333 1234.5
5ab 9.56    1 5 1234.5
13 67       2 13 67
5 9.5a      2 5 9.5
5a1.7       1 5 1234.5
*/
