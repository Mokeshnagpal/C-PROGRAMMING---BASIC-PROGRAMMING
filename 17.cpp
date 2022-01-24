#include <stdio.h>
int main()
{
	double s=0.0,a=0.0;
	printf("INPUT SIDE=\n");
	scanf("%lf",&s);
	a=(s*s*1.732)/4;
	printf("AREA=%0.2lf",a);
	return 0;
}

