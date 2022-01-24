#include <stdio.h>
int main()
{
	int a=0,y=0,x=0,m=0,d=0;
	printf("INPUT NUMBER OF DAYS=\n");
	scanf("%d",&a);
	y=a/365;
	x=a%365;
	m=x/12;
	d=x%12;
	printf("YEARS=%d\nMONTHS=%d\nDAYS=%d\n",y,m,d);
}
