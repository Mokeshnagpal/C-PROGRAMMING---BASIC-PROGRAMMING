#include <stdio.h>
#include <math.h>
int main()
{
	double b=0.0,h=0.0,a=0.0,s=0.0,base=0.0,sur=0.0,vol=0.0;
	printf("INPUT BASE AND HEIGHT AND APOTHEM LENGTH=\n");
	scanf("%lf",&b);
	scanf("%lf",&h);
	scanf("%lf",&a);
	s=sqrt(b*b+h*h);
	base=b*a*5/2;
	sur=b*s*5/2+base;
	vol=(a*b*h*5)/6;
	printf("VOLUME=%0.2lf\n",vol);
	printf("BASE AREA=%0.2lf\n",base);
	printf("SURFACE AREA=%0.2lf\n",sur);
	return 0;
}

