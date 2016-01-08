// PRAWIE DZIAŁA

#include <stdio.h>

int a, b, c;

int algorytm(int a, int b) {
  int c = 0;
  while (b != 0) {
    if (b%2 != 0)
    c += a;
    a *= 2;
    b /= 2;
  }
  return (c);
}

int main() {
  printf("Jakie liczby chcesz pomnożyć? ");
  scanf("%d %d\n", &a, &b);
  c = algorytm(a, b);
  printf("Wynik: %d\n", c);
}
