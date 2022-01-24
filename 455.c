#include <stdio.h>
int main()
{
	int a=10,b=0;
	a=(++a + ++a + ++a + ++a);
	printf("%d",a);
	return 0;
}
