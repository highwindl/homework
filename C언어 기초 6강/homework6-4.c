#include<stdio.h>

int main()
{
	int a;
	
	printf("a 입력:");
	scanf("%d", &a);

	switch(a%2)	
	{
		case 0:
			printf("a는 짝수입니다.");
			break;			
		case 1:
			printf("a는 홀수입니다.");
			break;					
	}	
	
	return 0;	
}
