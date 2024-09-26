#include <stdio.h>
#include <stdint.h>

// Assuming all inputs are legal.
int main() {
  int32_t a, b, c, d, e, f;
  int32_t sum;

  printf("Please input the first operand: ");
  scanf("%c%c%c", &a, &b, &c);
  printf("Please input the second operand: ");
  scanf("\n"); 
  // A mysterious way to consume the \n in the first input
  // as scan of %c does not consume it.
  scanf("%c%c%c", &d, &e, &f);
  printf("Please enter the sum: ");
  scanf("%d", &sum);
  // printf("%c %c %c %c %c %c %d\n", a, b, c, d, e, f, sum);

  int32_t remain = sum - (100 * (a - 48) + 10 * (e - 48) + (c - 48));
  // printf("%d\n", remain);
  int32_t x, y, z;
  z = remain % 10;
  x = (remain - z) % 100 / 10;
  y = (remain - z - x) / 100;

  printf("Ans: %c = %d, %c = %d, %c = %d\n", b, x, d, y, f, z);
  return 0;
}
