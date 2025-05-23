#include <stdio.h>  // pointer_to_pointer.c

int main()
{
	int a=1;
	int *p1,**p2,***p3,****p4;
	p1=&a;
	p2=&p1;
	p3=&p2;
	p4=&p3;
	printf("%d",&p4);
	printf("\n %d %d",&p3,p4);
	printf("\n %d %d %d",*p4,p3,&p2);
	printf("\n %d %d %d %d",**p4,*p3,p2,&p1);
	printf("\n %d %d %d %d %d",***p4,**p3,p2,p1,&a);
	printf("\n %d %d %d %d %d",****p4,***p3,**p2,*p1,a);  //if p1 putting **p1 it will through error

	return 0;
}