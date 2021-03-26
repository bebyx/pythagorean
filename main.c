#include <stdio.h>
#include <stdlib.h>
#include "pythagorean.h"

int main(int argc, char const *argv[]) {
  int hypotenuse, cathetus;
  puts("Enter hypotenuse:");
  scanf("%d", &hypotenuse);
  puts("Enter known cathetus:");
  scanf("%d", &cathetus);

  int *print_out = pythagorean(hypotenuse, cathetus);

  printf("other_cathetus: %d, square: %d\n", print_out[0], print_out[1]);
  free(print_out);
  print_out = NULL;
  return 0;
}
