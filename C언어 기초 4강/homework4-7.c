#include <stdio.h>

int main()
{
	int a, b;

	printf("���� �� ���� �Է��ϼ���:");
	scanf("%d %d", &a, &b);
	
	printf("%d + %d = %d �Դϴ�.\n", a, b, a+b);
	printf("%d - %d = %d �Դϴ�.\n", a, b, a-b);
	printf("%d * %d = %d �Դϴ�.\n", a, b, a*b);
	printf("%d / %d = %d �Դϴ�.\n", a, b, a/b);
		
	system("pause");
	
	return 0;
}
