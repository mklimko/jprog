// Napisz funkcję, która oblicza wartość silni z liczby naturalnej.
// Wykorzystaj ją w programie wypisującym na wyjście silnię 10 pierwszych
// liczb naturalnych.
// 3! = 1 * 2 * 3 = 6
// 0! = 1
// 1! = 1
#include <stdio.h>

int factorial(int n) {
  int fact = 1;

for (int i = 1; i <= n; i++) {
  fact *= i;
  }
  return fact;
}

int main() {
  for (int i = 0; i <= 10; i++) {
    printf("Factorial(%d) = %d\n", i, factorial(i));
  }
}
