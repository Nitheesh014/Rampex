#include <stdio.h> // pointer concepts (pointer_basics_demo.c)
int main()
{
	int a = 10;
	int b = 20;
	int *it, *csa;

	it = &a;
	csa = &b;

	a = 11;
	it = csa;
	*csa = 21;

	printf("%d %d", a, b);
	printf("\n %d %d", &a,&b);
	printf("\n %d %d", it,csa);
	printf("\n %d %d", &it,&csa);
	printf("\n %d %d", *it,*csa);



	return 0;
}