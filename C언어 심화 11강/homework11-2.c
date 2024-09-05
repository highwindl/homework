#include<stdio.h>


int main()
{
	int *p;
	int a = 3;
	
	p = &a;
	
	printf("a의 주소값: %d\n", p);
	printf("a의 주소에 저장된 값: %d\n", *p);
	
	*p = 15;
	printf("a의 값: %d\n", a);
	
	return 0;
}
