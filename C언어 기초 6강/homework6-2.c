#include<stdio.h>

int main()
{
	int a, b;
	
	printf("a,b �Է�:");
	scanf("%d %d", &a, &b);
	
	if(a>b)
	{
		printf("a�� b���� Ů�ϴ�.\n");	
	}
	else if(b>a)
	{
		printf("a�� b���� �۽��ϴ�.\n");	
	}
	else
	{
		printf("a�� b�� �����ϴ�.\n");	
	}
	
	return 0;	
}
