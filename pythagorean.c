#include <stdlib.h>
#include <math.h>
#include "pythagorean.h"


int get_other_cathetus(int hypotenuse, int cathetus) {
  int other_cathetus = sqrt((hypotenuse*hypotenuse) - (cathetus*cathetus));

  return other_cathetus;
}

int get_square(int cathetus, int other_cathetus) {
  int square = (cathetus + other_cathetus) / 2;

  return square;
}
