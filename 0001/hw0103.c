#include <stdio.h>
#include <stdint.h>


int main() {
  int32_t dec, dec_inv;
  printf("Please enter an unsigned 16-bits number: ");
  scanf("%d", &dec);

  int32_t d4, d3, d2, d1; // original oct: d4d3d2d1
  d1 = dec % 8;
  d2 = (dec - d1) / 8 % 8;
  d3 = (dec - 8 * d2 - d1) / 64 % 8;
  d4 = (dec - 64 * d3 - 8 * d2 - d1) / 512 % 8;

  dec_inv = d1 * 512 + d2 * 64 + d3 * 8 + d4;

  printf("Before Flip:\n");
  printf("%ld_10 = %ld_8\n", dec, d4 * 1000 + d3 * 100 + d2 * 10 + d1);

  printf("After Flip:\n");
  printf("%ld_8 = %ld_10\n", d1 * 1000 + d2 * 100 + d3 * 10 + d4, dec_inv);
  return 0;
}
