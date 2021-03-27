#include <stdio.h>
#include <stdlib.h>
#include "pythagorean.h"

int main(int argc, char const *argv[]) {
  int hypotenuse, cathetus,
      other_cathetus, square;

  puts("Enter hypotenuse:");
  scanf("%d", &hypotenuse);
  puts("Enter known cathetus:");
  scanf("%d", &cathetus);

  other_cathetus = get_other_cathetus(hypotenuse, cathetus);
  square = get_square(cathetus, other_cathetus);

  printf("other_cathetus: %d, square: %d\n", other_cathetus, square);

  return 0;
}
