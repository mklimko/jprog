// Napisz program, który ze stdin wczyta 6 liczb rzeczywistych do tablicy,
// a następnie wypisze liczbę liczb dodatnich w niej zawartych.
#include <stdio.h>

int main() {

  float array[6];
  int m, n = 0;

  printf("Podaj 6 liczb całkowitych:\n");
  for(m = 0; m < 6; m++) {
    scanf("%f", &array[m]);
  }

  for (m = 0; m < 6; m++) {
    if (array[m] >= 0) {
      n += 1;
    }
  }
  printf("Tablica zawiera %d liczb dodatnich.\n", n);
}
