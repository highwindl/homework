#include <stdio.h>

int main()
{
	int a = 2;
	char c = 'a';
	printf("int=%d, char=%c\n",  a+4, c+2);
	a = 3;
	c = 'b';
	
	printf("int=%d, char=%c\n",  a, c);
	
	system("pause");
	
	return 0;
}
