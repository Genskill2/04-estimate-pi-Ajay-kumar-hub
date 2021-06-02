#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float wallis_pi(int n)
{
	
	float temp,temp1,temp2,pei;
	for(int i=0;i<n;i++)
{
	temp=4*(pow(1,2));
	temp1=temp-1;
	temp2=temp/temp1;
	
}
pei=2*temp2;
return(pei);
}

int main(void) {
  float pi;
  for (int i=0; i<5; i++) {
    pi = wallis_pi(i);
    if (!(fabs(pi - M_PI) > 0.15)) {
      printf("Estimate with just %d iterations is %f which is too accurate.\n", i, pi);
      /*abort();*/
    }
  }

  for (int i=500; i<3000; i++) {
    pi = wallis_pi(i);
    if (!(fabs(pi - M_PI) < 0.01)) {
      printf("Estimate with even %d iterations is %f which is not accurate enough.\n", i, pi);
      /*abort();*/
    }
  }
}
