#include <stdio.h>
#include<math.h>
int main()
{
	double a=0.0,b=0.0,d=0.0,p=0.0;
	printf("INPUT TWO NUMNBER=\n");
	scanf("%lf",&a);
	scanf("%lf",&b);
	d=sqrt(a*a+b*b);
	p=2*(a+b);
	printf("Diagonal=%0.2lf\n",d);
	printf("Perimeter=%0.2lf\n",p);
	return 0;
}

