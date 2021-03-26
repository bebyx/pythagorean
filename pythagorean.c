#include <stdlib.h>
#include <math.h>
#include "pythagorean.h"

int * pythagorean(int hypotenuse, int cathetus) {
  int other_cathetus, square;
  other_cathetus = sqrt((hypotenuse*hypotenuse) - (cathetus*cathetus));

  square = (cathetus + other_cathetus) / 2;

  int *result = malloc(sizeof(int) * 2);
  result[0] = other_cathetus;
  result[1] = square;

  return result;
}
