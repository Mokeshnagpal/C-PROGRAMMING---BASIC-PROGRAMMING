#include <stdio.h>
#include <math.h>
int main()
{
	double d1=0.0,d2=0.0,x=0.0,r1=0.0,r2=0.0;
	printf("INPUT 2 ANGLES IN DEGREE=\n");
	scanf("%lf",&d1);
    r1=(22*d1/(7*180));
    scanf("%lf",&d2);
    r2=(22*d2/(7*180));
	x=(tan(r1)-tan(r2))/(1+tan(r1)*tan(r2));
	printf("\ntan(a-b)=%0.2lf",x);
	return 0;
}
