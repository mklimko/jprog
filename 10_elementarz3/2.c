#include <stdio.h>
#include <math.h>

int main() {
  float i;

  printf("Liczba\tPierwiastek\n");

  for (i = 1; i <= 20; i++) {
    printf("%.0f\t%.3f\n", i, sqrt(i));
  }
}
