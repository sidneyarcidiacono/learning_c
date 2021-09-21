/*
main() is a function, but we can also create custom functions.
*/
#include <stdio.h>

/*
Here, we define our function's prototype.
Because this is above the main() declaration,
the compiler won't throw an error about it being undefined.
We only need to create prototypes if we don't want to just go ahead
and write the whole function at the top of the file. 
*/
int mult(int x, int y);

int main()
{
  int x;
  int y;

  printf("Please input two numbers to be multiplied: \n");

  scanf("%d", &x);
  scanf("%d", &y);
  printf("The product of your numbers is %d\n", mult(x, y));
  // getchar() blocks the program until the user presses enter
  getchar();
}

int mult( int x, int y ) {
  return x * y;
}
