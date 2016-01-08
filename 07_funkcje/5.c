#include <stdio.h>

void prostokat(int szer, int wys);
void owal(int szer, int wys);
void strzalka(int szer, int wys);
void diament(int szer, int wys);

int main() {

prostokat(5, 6);
printf("\t");
owal(6, 6);
printf("\t");
strzalka(5, 6);
printf("\t");
diament(5, 6);

}

void prostokat(szer, wys) {
  for (szer = 0; szer <= 5; szer++) {
    putchar("*");
  }
}
