#include<stdio.h>
#include<assert.h>

int main(void)
{

  unsigned char r = 0x10;
  unsigned char b = 0xFC;

  unsigned char R_B = r & b;

  printf("%x & %x = %x\n", r, b, R_B );
  assert((0x0f & 0x55) == 0x05);

  return 0;
  
}
