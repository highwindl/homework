#include<stdio.h>

int main()
{
	int a;
	
	printf("a �Է�:");
	scanf("%d", &a);

	switch(a%2)	
	{
		case 0:
			printf("a�� ¦���Դϴ�.");
			break;			
		case 1:
			printf("a�� Ȧ���Դϴ�.");
			break;					
	}	
	
	return 0;	
}
