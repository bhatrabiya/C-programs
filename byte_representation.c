#include<stdio.h>

void show_mem_rep(char *start, int n)
    {
         int r;
         for ( r = 0; r < n; r++ )
         printf("%.2x", start[r]);
         printf("\n");

     }

int main()
{
        int r = 0x01234567;
        show_mem_rep((char *)&r, sizeof(r));
	  getchar();

        return 0;
}



