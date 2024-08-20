#include<stdio.h>

int accX(int x)
{
	static int returnValue = 0;
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
