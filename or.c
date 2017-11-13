#include<stdio.h>
int main(void)
{

  unsigned char r = 0x10;
  unsigned char b = 0xFC;
  unsigned char R_B = r | b;

  printf("%x & %x = %x\n", r, b, R_B);

  return 0;
}
