#include <stdio.h>
#include <math.h>
int main()
{
	double b=0.0,h=0.0,s=0.0,base=0.0,sur=0.0,vol=0.0;
	printf("INPUT BASE AND HEIGHT=\n");
	scanf("%lf",&b);
	scanf("%lf",&h);
	s=sqrt(b*b+h*h);
	base=b*b;
	sur=2*b*s+b*b;
	vol=(1*base*h)/3;
	printf("VOLUME=%0.2lf\n",vol);
	printf("BASE AREA=%0.2lf\n",base);
	printf("SURFACE AREA=%0.2lf\n",sur);
	return 0;
}

