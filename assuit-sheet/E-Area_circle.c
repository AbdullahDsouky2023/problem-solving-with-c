#include <stdio.h>
#define PI 3.141592653
#define CalCaulate_Area(R) (R * R * PI)

int main(void) {
  double R;

  scanf("%lf", &R);
  printf("%0.9lf \n",CalCaulate_Area(R));
  return (0);
}