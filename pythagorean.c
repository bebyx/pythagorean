#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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

int * pythagorean(int hypotenuse, int cathetus) {
  int other_cathetus, square;
  other_cathetus = sqrt((hypotenuse*hypotenuse) - (cathetus*cathetus));

  square = (cathetus + other_cathetus) / 2;

  int *result = malloc(sizeof(int) * 2);
  result[0] = other_cathetus;
  result[1] = square;

  return result;
}
