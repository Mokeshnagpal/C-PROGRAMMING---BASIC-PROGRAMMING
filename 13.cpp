#include <stdio.h>
#include<math.h>
int main()
{
	double a=0.0,b=0.0,c=0.0,p=0.0,x=0.0;
	printf("INPUT BASE AND HEIGHT=\n");
	scanf("%lf",&a);
	scanf("%lf",&b);
	c=sqrt(a*a+b*b);
	p=a+b+c;
	x=(a*b)/2;
	printf("AREA=%lf",x);
	printf("\nPERIMETER=%lf",p);
}
