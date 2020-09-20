	#include<stdio.h>

	int main()
	{
		int x, n;

		printf("x, n의 값을 입력하십시오:\n");
		scanf("%d %d", &x, &n);

		printf("입력받은 값 x = %d, n = %d 입니다.\n", x, n);
		printf("%d * (2의%d승) = %d 입니다.\n", x, n, x*(2<<n));
		return 0;
	}

