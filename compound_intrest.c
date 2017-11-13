#include<stdio.h>
#include<math.h>

int main()
{

  float principle, rate, time, amount, intrest;

  printf("Enter Principle\n");
  scanf("%f",&principle);
  printf("Enter Rate of Interest\n");
  scanf("%f", &rate);
  printf("Enter Time\n");
  scanf("%f", &time);

  amount = principle * pow(( 1 + rate/100), time);
  intrest = amount - principle;

  printf("after %d years\n",time);
  printf("total amount = %.4f\n" , amount);
  printf("Compund Intrest Earned = %.4f",intrest);

  return 0;

}
