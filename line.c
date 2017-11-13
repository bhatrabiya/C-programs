#include<stdio.h>

void draw_line(int length);

int main(void)
{

      int length;
      printf("Enter the length of the line ? ");
      scanf("%d", &length);

      draw_line(length);

      return 0;

}

void draw_line(int length)
{

     int r = 0;

     while( r < length){
       putc('*' , stdout);

       r = r+ 1;
     }
     putc('\n', stdout);

}
    
  
