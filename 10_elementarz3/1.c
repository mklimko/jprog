#include <stdio.h>

int c;
int main() {

if (c=='\t')
  printf("\\t");
else if (c=='\\')
  printf("\\\\");
else
while ((c=getchar())!=EOF)
  putchar(c);
}
