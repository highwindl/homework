	#include<stdio.h>

	int main()
	{
		int x, n;

		printf("x, n�� ���� �Է��Ͻʽÿ�:\n");
		scanf("%d %d", &x, &n);

		printf("�Է¹��� �� x = %d, n = %d �Դϴ�.\n", x, n);
		printf("%d * (2��%d��) = %d �Դϴ�.\n", x, n, x*(2<<n));
		return 0;
	}

