#include<stdio.h>

int sumXY(int x, int y);
int subXY(int x, int y);

int main()
{
	int x, y;
	
	printf("x, y값 입력:");
	scanf("%d %d", &x, &y);
	
	printf("x와 y를 더한값은 %d입니다.\n", sumXY(x, y));
	printf("x에서 y를 뺀 값은 %d입니다.\n", subXY(x, y));  
	
	
	return 0;
}

int sumXY(int x, int y)
{
	return x + y;
}

int subXY(int x, int y)
{
	return x - y;
}
