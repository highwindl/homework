#include<stdio.h>


int main()
{
	char *p;
	int i; 
	char a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	p = a;
	
	for(i = 0; i < 10; i++)
	{
		printf("p + %d俊 历厘等 林家蔼: %d\n", i, p + i);
		printf("p + %d狼 林家俊 历厘等 蔼: %d\n\n", i, *(p + i));		
	}
	
	return 0;
}
