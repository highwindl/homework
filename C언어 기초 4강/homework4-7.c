#include <stdio.h>

int main()
{
	int a, b;

	printf("숫자 두 개를 입력하세요:");
	scanf("%d %d", &a, &b);
	
	printf("%d + %d = %d 입니다.\n", a, b, a+b);
	printf("%d - %d = %d 입니다.\n", a, b, a-b);
	printf("%d * %d = %d 입니다.\n", a, b, a*b);
	printf("%d / %d = %d 입니다.\n", a, b, a/b);
		
	system("pause");
	
	return 0;
}
