#include<stdio.h>

void output_facilities(int coupon);

int main(void)
{

      int coupon;

      puts("Enter your coupon value (1-4) ? ");
      scanf("%d", &coupon);

      output_facilities(coupon);

      return 0;
}

void output_facilities(int coupon){
   
      switch(coupon){
      case 4:
	puts("You get  brand new car");

      case 3:
	puts("You get a rs 50000/- cash back");

      case 2:
	puts("You get 60% discount");

      case 1:
	puts("You get a pen and copy");

      default:
	puts("Nothing");
      }
}
	
