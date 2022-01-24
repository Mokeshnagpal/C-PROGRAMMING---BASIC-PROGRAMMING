#include <stdio.h>
int main()
{
	double c=0.0,f=0.0;
	printf("Input centrigrade=\n");
	scanf("%lf",&c);
	f=1.8*c+32;
	printf("\nTEMPERATURE IN FARAHENITE=%0.2lf",f);
	return 0;
}
