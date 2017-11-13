#define MAXSIZE 10
#include<stdio.h>
#include<math.h>

int main()
{

        float x[MAXSIZE];

          int i, n;

	  float average, variance,std_devation, sum = 0, sum1 = 0;

	  printf("Enter the value of N \n");

	  scanf("%d", &n);

	  printf("Enter %d real numbers \n",n);

	  for ( i = 0; i < n; i++)
	    {
	      scanf("%f",&x[i]);

	    }

	  for ( i = 0; i < n; i++)
	    {
	      sum = sum + x[i];
	    }
	  average = sum/(float)n;
	  
	  for ( i = 0; i < n; i++)
	    {
	      sum1 = sum1 + pow((x[i] - average), 2);
	    }
	  variance = sum1/(float)n;

	  std_devation = sqrt(variance);

	  printf("average of all elements = %.2f\n", average);
	  printf("variance of all elements = %.2f\n", variance);
	  printf("std_devation = %.2f\n", std_devation);
	  
	  return 0;
}
