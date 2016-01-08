#include <stdio.h>

int main () {
  int c;
  int nb, nt, nl;

  nb = 0;
  nt = 0;
  nl = 0;

  while ((c=getchar()) != EOF) {
    if (c == ' ') {
      ++nb;
    }
    else if (c == '\t') {
      ++nt;
    }
    else if (c == '\n') {
      ++nl;
    }
  }
  printf("liczba znaków odstępu = %d, tabulacji = %d, nowego wiersza = %d\n", nb, nt, nl);
  return 0;
}
