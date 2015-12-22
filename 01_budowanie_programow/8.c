#include <stdio.h>

int main() {

  int a, b, c;

  printf("Wprowadź trzy liczby całkowite: \n");
  scanf("%d %d %d", &a, &b, &c);

  printf("Suma wynosi: %d\n", a + b + c);
  printf("Iloczyn wynosi: %d\n", a * b * c);
  if (a < b && a < c) {
    printf("Najmniejsza liczba to: %d\n", a);
  }
  else if (b < a && b < c) {
    printf("Najmniejsza liczba to: %d\n", b);
  }
  else {
    printf("Najmniejsza liczba to: %d\n", c);
  }

  if (a > b && a > c) {
    printf("Największa liczba to: %d\n", a);
  }
  else if (b > a && b > c) {
    printf("Największa liczba to: %d\n", b);
  }
  else {
    printf("Największa liczba to: %d\n", c);
  }

  return 0;
}
