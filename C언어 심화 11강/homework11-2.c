#include<stdio.h>


int main()
{
	int *p;
	int a = 3;
	
	p = &a;
	
	printf("a�� �ּҰ�: %d\n", p);
	printf("a�� �ּҿ� ����� ��: %d\n", *p);
	
	*p = 15;
	printf("a�� ��: %d\n", a);
	
	return 0;
}
