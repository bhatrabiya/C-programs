#include<stdio.h>

int main()
{

       int r;

       puts("Enter a number");
       scanf("%d", &r);

       int fact = 1;

       while( r > 1)
	 {
	   fact = fact * r;

	   r =1;
	 }

	   printf("factorial is: %d\n", fact);

	   return 0;

	 }
  
