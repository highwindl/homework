	#include<stdio.h>

	int main()
	{
		int x, y;

		printf("x, y의 값을 입력하십시오:\n");
		scanf("%d %d", &x, &y);

		printf("입력받은 값 x = %d, y = %d 입니다.\n", x, y);
		printf("%d + %d = %d 입니다.\n", x, y, x + y);
		printf("%d - %d = %d 입니다.\n", x, y, x - y);
		printf("%d * %d = %d 입니다.\n", x, y, x * y);
		printf("%d / %d = %d 입니다.\n", x, y, x / y);
		printf("%d %% %d = %d 입니다.\n", x, y, x % y);

		return 0;
	}

