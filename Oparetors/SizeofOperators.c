#include <stdio.h>

int main () {

  char c = 'A';
  short s = 43;
  int i = 231;
  long l = 3232l;
  long long ll = 2343ll;


  printf("Sizeof char - %d\n", (int)sizeof(c));
  printf("Sizeof short - %d\n", (int)sizeof(s));
 printf("Sizeof int - %d\n", (int)sizeof(i));
    return 0;
}