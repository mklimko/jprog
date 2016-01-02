#include <stdio.h>
#include <math.h>

int main() {

  float l1, l2, krok;

  printf("Podaj wartość początkową, wartość końcową oraz krok dla argumentu: \n");
  scanf("%f %f %f", &l1, &l2, &krok);

while (l1 <= l2) {
  printf("%.4f %.4f\n", l1, sqrt(l1));
  l1 = l1 + krok;
  }
}
