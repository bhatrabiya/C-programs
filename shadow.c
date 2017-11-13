#include<stdio.h>

int r = 20;

int main(void)
{

           int r = 30;


	   printf("In main r = %d\n", r);
	   {
	     int r = 50;
	     printf("In main - in block r = %d\n", r);
	   }

	   return 0;

}
