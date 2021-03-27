#include <stdio.h>
#include <stdlib.h>
#include "pythagorean.h"

int main(int argc, char const *argv[]) {
  float hypotenuse, cathetus,
      other_cathetus, area;

  puts("Enter hypotenuse:");
  scanf("%f", &hypotenuse);
  puts("Enter known cathetus:");
  scanf("%f", &cathetus);

  other_cathetus = get_other_cathetus(hypotenuse, cathetus);
  area = get_area(cathetus, other_cathetus);

  printf("other_cathetus: %.2f, area: %.2f\n", other_cathetus, area);

  return 0;
}
