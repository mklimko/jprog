// Zdefiniuj funkcję przeciwprostokatna obliczającą długość przeciwprostokątnej
// trójkąta prostokątnego z podanych długości przyprostokątnych. Wykorzystaj
// tę funkcję w programie do określania długości przeciwprostokątnej każdego
// z następujących trójkątów:
// trójkąt  bok 1  bok2
//    1        3.0    4.0
//    2        5.0    5.0
//    3        1.0    6.0
//    Funkcja powinna pobierać dwa argumenty typu double i zwracać
// długość przeciwprostokątnej też jako double.
#include <stdio.h>
#include <math.h>

double przeciwprostokatna(double a, double b) {
  return sqrt(a*a + b*b);
}

int main() {
  double a[] = { 3.0, 5.0, 1.0};
  double b[] = { 4.0, 5.0, 6.0};

  for (int i = 0; i < 3; i++) {
    printf("a = %.2f, b = %.2f\n, przeciwprostokatna = %.2f\n", a[0], b[0],
     przeciwprostokatna(a[0], b[0]));
  }
}
