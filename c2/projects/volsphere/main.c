#include <stdio.h>
#define PI_VALUE 3.14

int main(void) {

  int radius = 10;

  printf("The volume of the sphere is: %f\n", (radius * radius * radius) * PI_VALUE * (4.0f/3.0f));

  return 0;
}
