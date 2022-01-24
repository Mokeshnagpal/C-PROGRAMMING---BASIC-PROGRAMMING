#include <stdio.h>
int main()
{
	int A=15,B=25,C=0;
	C=A;
	A=B;
	B=C;
	printf("Values of A and B after interchanging=%d and %d",A,B);
	return 0;
}
