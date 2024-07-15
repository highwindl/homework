//아래의 코드는 입력받은 값 n에따라 *를 순차로 출력하는 예제입니다.

#include<stdio.h>

void triangle(int n)
{
	int i, j;
		
	for(i = 1; i <= n; i++)
	{
		for(j = 0; j < i; j++)
		{
			printf("*");
		}      
		printf("\n");
	}
	
}

int main()
{
	int n;

	printf("반복횟수 입력:"); 
	scanf("%d", &n);

	triangle(n);
	
	return 0;
}
