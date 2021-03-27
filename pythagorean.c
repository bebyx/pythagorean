#include <stdlib.h>
#include <math.h>
#include "pythagorean.h"


float get_other_cathetus(float hypotenuse, float cathetus) {
  float other_cathetus = sqrt((hypotenuse*hypotenuse) - (cathetus*cathetus));

  return other_cathetus;
}

float get_area(float cathetus, float other_cathetus) {
  float area = (cathetus + other_cathetus) / 2.0;

  return area;
}
