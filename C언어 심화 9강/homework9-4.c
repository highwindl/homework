#include<stdio.h>

int returnValue = 0;

int accX(int x)
{
	returnValue += x;
	
	return returnValue;
}

int main()
{
	int i, y;
	
	for(i = 1; i <= 100; i++)
	{
		y = accX(i);
	}
	
	printf("1~100ÀÇ ÇÕ: %d", y);
	
	return 0;
}
