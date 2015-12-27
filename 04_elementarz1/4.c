#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, fact = 1;

  printf("Podaj liczbę: \n");
  scanf("%d\n", &n);

  if (n < 0 || n > 15) {
    printf("Podaj mniejszą liczbę: \n");
    exit(1);
  }
  else {
    for (int i = 1; i <= n; i++)
    fact = fact * i;
    printf("Silnia z %d wynosi: %d\n", n, fact);
  }
}
