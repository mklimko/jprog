#include <stdio.h>

long double funkcja(int p) {
  int m, n;
  long double pi, znak;

  pi = 0;
  znak = 1;

  for (m = 1, n = 0; n < p; n++, m += 2) {
    pi += (znak * 4) / m;
    znak *= (-1);
  }
  return pi;
}

int main() {
  int powt;
  printf("Podaj liczbę powtórzeń: ");
  scanf("%d", &powt);

  printf("%d:\t%Lf\n", powt, funkcja(powt));
  printf("10:\t%Lf\n", funkcja(10));
  printf("100:\t%Lf\n", funkcja(100));
  printf("1000:\t%Lf\n", funkcja(1000));
  printf("1000000:%Lf\n", funkcja(1000000));
}
