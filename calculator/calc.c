/*
To practice syntax and functions, I'm going to write a really
oversimplified CLI calculator program.
*/
#include <stdio.h>

int add (int x, int y);
int sub (int x, int y);
int mult (int x, int y);
int divide (int x, int y);

int main () {
  // First, ask the user to determine their numbers
  int x;
  int y;
  char operation;
  int result = 2;

  printf("Please enter two numbers: ");

  scanf("%d", &x);
  scanf("%d", &y);

  printf("Please select from 'add' (a), 'subtract' (s), 'multiply' (m) or 'divide' (d). ");
  scanf(" %c", &operation);

  if (operation == 'a') {
    result = add(x, y);
  } else if (operation == 's') {
    result = sub(x, y);
  } else if (operation == 'm') {
    result = mult(x, y);
  } else if (operation == 'd') {
    result = divide(x, y);
  }

  printf("The result is: %d", result);

  getchar();
}

int add(int x, int y) {
  return x + y;
}

int sub(int x, int y) {
  return x - y;
}

int mult(int x, int y) {
  return x * y;
}

int divide(int x, int y) {
  return x / y;
}
