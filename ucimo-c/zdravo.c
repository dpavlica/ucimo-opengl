#include <stdio.h>

#define PI 3.1415
char poruka[] = "Zdravo Svete!";
int min = 3;
int max = 4;

int saberi(int x, int y) {
  return x + y;
}

int main() {
  printf("%s\n", poruka);

  printf("PI je %f\n", PI);

  printf("Zbir je %d\n", saberi(min, max));

  if (max > min) printf("Tačno je!\n");

  return 0;
}
