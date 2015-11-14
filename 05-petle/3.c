#include <stdio.h>

int main() {
  int a, b;

  printf("Podaj dwie liczby ");
  scanf("%d %d", &a, &b);

  if (a > b) {
    printf("Pierwsza liczba musi być mniejsza od drugiej.\n");
  }

  for (a = a - 1; a < b; a++) {
    printf("%d\n", a + 1);
  }
}
