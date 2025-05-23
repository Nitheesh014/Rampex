#include <stdio.h> //pointer_increment_decrement.c
int main()
{
	int a = 10;
	int b = 20;
	int *it, *csa;

	it = &a;
	csa = &b;

	++a;
	--b;
	++*it;
	--*csa;
	printf("%d %d", a, b);
	printf("\n %d %d", &a,&b);
	printf("\n %d %d", it,csa);
	printf("\n %d %d", &it,&csa);
	printf("\n %d %d", *it,*csa);



	return 0;
}
