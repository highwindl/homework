	#include<stdio.h>

	int main()
	{
		int x, y;

		printf("x, y�� ���� �Է��Ͻʽÿ�:\n");
		scanf("%d %d", &x, &y);

		printf("�Է¹��� �� x = %d, y = %d �Դϴ�.\n", x, y);
		printf("%d + %d = %d �Դϴ�.\n", x, y, x + y);
		printf("%d - %d = %d �Դϴ�.\n", x, y, x - y);
		printf("%d * %d = %d �Դϴ�.\n", x, y, x * y);
		printf("%d / %d = %d �Դϴ�.\n", x, y, x / y);
		printf("%d %% %d = %d �Դϴ�.\n", x, y, x % y);

		return 0;
	}

