#include<stdio.h>
int main()
{

        int i, n, range;

       printf("Enter an Intiger: ");
       scanf("%d", &n);

       printf("Enter the range: ");
       scanf("%d", &range);

       for(i=1; i <= range; ++i)
        {
       printf("%d * %d = %d \n", n , i, n*i);
        }

       return 0; 
}  
