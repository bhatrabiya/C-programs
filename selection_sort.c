#include<stdio.h>

int main()
{

          int array[100], n ,r, d, position, swap;

          printf("Enter number of elements\n");
          scanf("%d", &n);

	  printf("Enter %d integers\n", n);

	  for ( r = 0 ; r < n ; r++ )
	    {
	    scanf("%d", array[r]);
	    }

	  for ( r = 0 ; r < (n - 1 ); r++ )
	    {
	      position = r;

	      for ( d = r + 1 ; d < n ; d++ )
		{
		  if ( array[position] > array[d] )
		    position = d;
		}

	      if ( position != r )
	      {
		swap = array[r];
		array[r] = array[position];
		array[position] = swap;

	      }
	    }
	  printf("Sorted list in assending prder :\n");

	  for ( r = 0 ; r < n ; r++ )
	    {
	    printf("%d\n", array[r]);
	    }

	  return 0;

}
