#include <stdio.h>
int main()
{
	double l=0.0,b=0.0,a=0.0;
	printf("INPUT DIAGONALS=\n");
	scanf("%lf",&l);
	scanf("%lf",&b);
	a=(l*b)/2;
	printf("AREA=%lf\n",a);
	return 0;
}
