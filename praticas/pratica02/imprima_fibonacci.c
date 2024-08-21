
#include <stdio.h>

int main() {
  printf("%7i %-7i\n", 1, 1);
  printf("%6i %i %-6i\n", 1, 2, 1);
  printf("%4i %i %i %i %-4i\n", 1, 2, 3, 2, 1);
  printf("%2i %i %i %i %i %i %-2i\n", 1, 2, 3, 5, 3, 2, 1);
  printf("%i %i %i %i %i %i %i %i %i\n", 1, 2, 3, 5, 8, 5, 3, 2, 1);
  return 0;
}

