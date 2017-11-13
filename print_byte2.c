#include<stdio.h>

typedef unsigned char byte;

void print_byte(byte x, byte mask)
{
        if((x & mask) == 0) {
          printf("0");
         }
        else{
        printf("1");
        }
}

  int main(void)
{
          byte x;
          int val;

          printf("Enter a byte ? ");
          scanf("%d", &val);

           x = (byte) val;
           int mask;

           for(mask = 0x80; mask != 0; mask >> 1)
           {
          print_byte(x, mask);
         }

         return 0;
  
}

  
