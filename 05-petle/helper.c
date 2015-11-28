#include <stdio.h>
#include <stdlib.h>

#include "helper.h"

void wczytaj_liczbe_calkowita(int *n_p){
  printf("Podaj liczbę całkowitą większą od 0: ");
  scanf("%d", n_p);

if (*n_p <= 0) {
  printf("Liczba musi być większa od 0.\n");
  exit(1);
  }
}

void wczytaj_liczby_calkowite_do_tablicy(int tab[], int len) {
}
