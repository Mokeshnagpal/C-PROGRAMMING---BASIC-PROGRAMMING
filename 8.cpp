#include <stdio.h>
int main()
{
	char n[20],a[20],e[20],p[20],d[20];
	printf("Input name=\n");
	scanf("%s",n);
	printf("Input address=\n");
	scanf("%s",a);
	printf("Input email=\n");
	scanf("%s",e);
	printf("Input phone number=\n");
	scanf("%s",p);
	printf("Input date of birth=\n");
	scanf("%s",d);
	printf("NAME=\t%s\n",n);
	printf("ADDRESS=\t%s\n",a);
	printf("EMAIL=\t%s\n",e);
	printf("PHONE NUMBER=\t%s\n",p);
	printf("DATE OF BIRTH=\t%s\n",d);
	return 0;
}
