#include <stdio.h>
#include <math.h>

int main() {

  double a;

  printf("Podaj liczbę: ");
  scanf("%lf", &a);

  if (a < 0) {
    printf ("Błąd: podana liczba nie może być ujemna.\n");
  exit(1);
  }
  else {
    printf("Pierwiastek kwadratowy: %lf", a * a);
  }
}
