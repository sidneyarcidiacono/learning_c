/*
This program plays with while loops in C
and will have the same output as loops.c
*/

#include <stdio.h>

int main()
{
  int x = 0; // Declare our variable

  while (x < 10) {
    printf("%d\n", x); // Print x on each iteration
    x++; // Increment x -- otherwise we have an infinite loop
  }
  getchar();
}
