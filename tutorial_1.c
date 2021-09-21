// Creating a function that uses variables

#include <stdio.h>

int main()
{
  int my_number;

  printf("Please enter a number: \n");
  // %d tells scanf to read an integer
  // Putting & before the variable name
  // gives scanf the memory location of that variable
  scanf("%d", &my_number);
  printf("You entered %d", my_number);
  getchar();
  return 0;
}
