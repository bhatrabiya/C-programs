#include<stdio.h>
#include<conio.h>

void main()
{
         float p, r, si;
         int t;

         printf("Enter the values of p,r and t\n");
	 scanf ("%f %f %d", &p, &r, &t);

	 si = (p * r * t)/100;

	 printf("Amount = Rs. 5.2f%\n", p);
	 printf("Rate = Rs. %5.2f%\n" , r);
	 printf("time = %d years\n", t);
	 printf("Simple Interest = %5.2f\n" , si);


}
