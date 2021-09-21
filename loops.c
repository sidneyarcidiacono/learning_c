/* Program to practice for loops in C */
#include <stdio.h>

int main()
{
  int x;

  for (x = 0; x < 10; x++) {
    // This loop will update x every time
    // and print out the value of x
    // then it'll check the value of x,
    // and repeat until x == 10
    printf( "%d\n", x);
  }
  getchar();
}
