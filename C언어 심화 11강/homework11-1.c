#include<stdio.h>


int main()
{
	int *p;
	int a = 3;
	
	p = &a;
	
	printf("a狼 林家蔼: %d\n", p);
	printf("a狼 林家俊 历厘等 蔼: %d\n", *p);
	
	return 0;
}
