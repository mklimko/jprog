/* Program ten dla dwóch liczb wczytanych z klawiatury
   wypisuje, która z nich jest większa. */
#include <stdio.h>
#include <stdlib.h>

int main() {
   int a, b, result_a, result_b;
   char *msg = "Większa liczba to: %d\n";

   printf("Podaj pierwsza liczbe: ");
   result_a = scanf("%d", &a);
   if (result_a == 0) {
     printf ("Error: błąd w konwersji pierwszej liczby\n");
     exit(1);
   }


   printf("Podaj druga liczbe: ");
   result_b = scanf("%d", &b);
   if (result_b == 0) {
     printf ("Error: błąd w konwersji drugiej liczby\n");
     exit(1);
   }

    if (a > b) {
      printf(msg, a);
  } else {
      printf(msg, b);
  }

}
