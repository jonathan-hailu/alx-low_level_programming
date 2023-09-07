#include <stdio.h>
/*This program first includes the stdio.h header file, which contains the printf() function. Then, it defines a main() function, which prints the size of each of the following types: */
int main() {
  printf("Size of char: %zu\n", sizeof(char));
  printf("Size of int: %zu\n", sizeof(int));
  printf("Size of long int: %zu\n", sizeof(long int));
  printf("Size of float: %zu\n", sizeof(float));
  printf("Size of double: %zu\n", sizeof(double));
  printf("Size of long double: %zu\n", sizeof(long double));

  return 0;
}
