#include <stdio.h>
int main()
{
	double r=0.0,v=0.0;
	printf("INPUT SIDE=\n");
	scanf("%lf",&r);
	v=(4*r*r*22)/21;
	printf("VOLUME=%0.2lf",v);
	return 0;
}

