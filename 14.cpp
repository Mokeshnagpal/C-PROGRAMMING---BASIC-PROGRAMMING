#include <stdio.h>
int main()
{
	double l=0.0,b=0.0,h=0.0,v=0.0;
	printf("INPUT LENGTH,BREATH AND HEIGHT=\n");
	scanf("%lf",&l);
	scanf("%lf",&b);
	scanf("%lf",&h);
	v=l*b*h;
	printf("VOLUME=%lf\n",v);
	return 0;
}
