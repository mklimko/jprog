// PROGRAM RYSUJE WZORY, ALE WYŚWIETLA JE JEDEN POD DRUGIM. JAK TO ZMIENIĆ?

#include <stdio.h>

// funkcje rysowania kształtów
void kwadrat(int linia) {
  if (linia == 0 || linia == 5) {
    printf("*****\n");
  } else {
    printf("*   *\n");
  }
}
void owal (int linia) {
  if (linia == 0 || linia == 5) {
    printf("  **  \n");
  }
  else if (linia == 1 || linia == 4) {
    printf(" *  * \n");
  }
  else {
    printf("*    *\n");
  }
}
void strzalka (int linia) {
  if (linia == 1) {
    printf(" *** \n");
  }
  else if (linia == 2) {
    printf("*****\n");
  }
  else {
    printf("  *  \n");
  }
}
void diament (int linia) {
  if (linia == 0 || linia == 5) {
    printf("  *  \n");
  }
  else if (linia == 1 || linia == 4) {
    printf(" * * \n");
  }
  else {
    printf("*   *\n");
  }
}
// funkcja main
int main() {
 int i;
  for (i = 0; i < 6; ++i) {
    kwadrat(i);
  }
  for (i = 0; i < 6; ++i) {
    owal(i);
  }
  for (i = 0; i < 6; ++i) {
    strzalka(i);
  }
  for (i = 0; i < 6; ++i) {
    diament(i);
  }
}
