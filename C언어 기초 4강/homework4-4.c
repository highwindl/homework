#include <stdio.h>

int main()
{
	char c = 0x4b;
	
	printf("%c", c);
	c = 0x6F;
	printf("%c", c);
	c = 0x72; //?�� ���� �Է�
	printf("%c", c);
	c = 0x65; //?�� ���� �Է�
	printf("%c", c);
	c = 0x61; //?�� ���� �Է�
	printf("%c\n", c);
	
	system("pause");
	
	return 0;
}
