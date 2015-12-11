// Napisz funkcję, która po wczytaniu liczby całkowitej wypisze jej cyfry
// zaczynając od ostatniej i kończąc na pierwszej. Na przykład po wczytaniu
// liczby '1410' funkcja powinna wypisać '0141'.

#include <stdio.h>

int main() {
  int x, reverse = 0;

  printf("Podaj dowolną liczbę: \n");
    scanf("%d\n", &x);

while (x != 0) {
  reverse = reverse * 10;
  reverse = reverse + x%10;
  x = x/10;
  }

  printf("Odwrotność Twojej liczby to: %d\n", reverse);
return 0;
}
// coś tu nadal nie gra, zamiast 0141 wypisuje 141
// problem z kończeniem programu (get your shit together, girl!)
