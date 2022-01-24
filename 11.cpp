#include <stdio.h>
#include<math.h>
int main()
{
	double p=0.0,c=0.0,b=0.0,a=0.0,s=0.0;
	printf("INPUT MARKS IN PHYSICS,CHEMISTRY,BIOLOGY=\n");
	scanf("%lf",&p);
	scanf("%lf",&c);
	scanf("%lf",&b);
	s=p+b+c;
	a=s/3;
	printf("\nSUM=%lf\n",s);
	printf("\nAVERAGE=%lf\n",a);
	return 0;
}
