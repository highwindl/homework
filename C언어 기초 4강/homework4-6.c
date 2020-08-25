#include <stdio.h>

int main()
{
	int a;
	char c;

	printf("숫자를 입력하세요:");
	scanf("%d %c", &a, &c);
	
	printf("입력된 값은 = %d %c 입니다.\n", a, c);
		
	system("pause");
	
	return 0;
}
