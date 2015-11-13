#include <stdio.h>
#include <math.h>

int main() {

  double a;

  printf("Podaj liczbę: ");
  scanf("%lf", &a);

  if (a < 0) {
    printf ("Błąd: podana liczba nie może być ujemna.\n");
  }
  else {
    printf("Pierwiastek kwadratowy z twojej liczby: %lf\n", a * a);
    printf("Odwrotność: -%lf\n", a);
  }
}
