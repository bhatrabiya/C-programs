#include<stdio.h>

int main()
{
  int s1,s2,s3,s4,s5,total;
      float per;

      printf("Enter 5 Nos.");
      scanf("%d%d%d%d%d", &s1,&s2,&s3,&s4,&s5);

      total = s1+s2+s3+s4+s5;
      per = total*100/500;
      
      if(per>=60&&per<=100)
	printf("You are ist");
      else if(per>=50&&per<=60)
	printf("You are 2nd");
      else if(per>=40&&per<=50)
	printf("you are 3rd");
      else
	printf("you are fail");

      return 0;

}

      
  
