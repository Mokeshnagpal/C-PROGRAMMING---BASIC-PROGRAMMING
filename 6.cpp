#include <stdio.h>
int main()
{
	double a=0.0,b=0.0,s=0.0,d=0.0,r=0.0,div=0.0,m=0.0;
	printf("INPUT TWO NUMNBER=\n");
	scanf("%lf",&a);
	scanf("%lf",&b);
	s=a+b;
	d=a-b;
	r=(int)a%(int)b;
	m=a*b;
	div=a/b;
	printf("SUM=%lf\n",s);
	printf("DIFFERENCE=%lf\n",d);
	printf("DIVISION=%lf\n",div);
	printf("REMAINDER=%lf\n",r);
	printf("MULTIPLICATION=%lf\n",m);
	return 0;
}
