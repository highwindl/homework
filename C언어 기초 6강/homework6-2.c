#include<stdio.h>

int main()
{
	int a, b;
	
	printf("a,b 입력:");
	scanf("%d %d", &a, &b);
	
	if(a>b)
	{
		printf("a는 b보다 큽니다.\n");	
	}
	else if(b>a)
	{
		printf("a는 b보다 작습니다.\n");	
	}
	else
	{
		printf("a와 b는 같습니다.\n");	
	}
	
	return 0;	
}
