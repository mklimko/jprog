// Korzystając z twierdzenia Euklidesa, napisać program obliczający
// rekurencyjnie największy wspólny dzielnik z liczb podanych na wejściu.

#include <stdio.h>

int NWD(int m, int n);
int main() {
   int m, n;
   printf("Podaj dwie liczby: ");
   scanf("%d %d", &m, &n);
   printf("NWD %d oraz %d = %d\n", m, n, NWD(m, n));
}

int NWD(int m, int n) {
    if (n != 0)
       return NWD(n, m%n);
    else
       return m;
}
