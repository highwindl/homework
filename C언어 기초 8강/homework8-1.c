#include<stdio.h>

int sumXY(int x, int y);
int subXY(int x, int y);

int main()
{
	int x, y;
	
	printf("x, y�� �Է�:");
	scanf("%d %d", &x, &y);
	
	printf("x�� y�� ���Ѱ��� %d�Դϴ�.\n", sumXY(x, y));
	printf("x���� y�� �� ���� %d�Դϴ�.\n", subXY(x, y));  
	
	
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
