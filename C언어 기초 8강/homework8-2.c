//�Ʒ��� �ڵ�� �Է¹��� �� n������ *�� ������ ����ϴ� �����Դϴ�.

#include<stdio.h>

void triangle(int n)
{
	int i, j;
		
	for(i = 1; i <= n; i++)
	{
		for(j = 0; j < i; j++)
		{
			printf("*");
		}      
		printf("\n");
	}
	
}

int main()
{
	int n;

	printf("�ݺ�Ƚ�� �Է�:"); 
	scanf("%d", &n);

	triangle(n);
	
	return 0;
}
