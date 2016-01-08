// Rozwiązanie iteracyjne

#include <stdio.h>

int main() {
  int a, b;
  printf("Podaj dwie liczby: ");
  scanf("%d %d", &a, &b);
  while (a != b) {
    if (a > b)
    a -= b;
    else
    b -= a;
  }
  printf("NWD wynosi: %d\n", a);
}
