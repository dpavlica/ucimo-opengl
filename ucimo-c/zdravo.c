#include <stdio.h>

char poruka[] = "Zdravo Svete!";
int min = 3;
int max = 4;

int saberi(int x, int y) {
  return x + y;
}

int main() {
  printf("%s\n", poruka);

  printf("Zbir je %d\n", saberi(min, max));

  if (max > min) printf("Tačno je!\n");

  return 0;
}
