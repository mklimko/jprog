/* zlicz znaki odstępu, tabulacji
i nowego wiersza */
#include <stdio.h>

int main () {
  int c;
  int nb, nt, nl;

  while ((c=getchar()) != EOF) {
    if (c == ' ') {
      nb = 0;
      ++nb;
    }
    else if (c == '\t') {
      nt = 0;
      ++nt;
    }
    else if (c == '\n') {
      nl = 0;
      ++nl;
    }
  }
  printf("%d %d %d\n", nb, nt, nl);
  return 0;
}
