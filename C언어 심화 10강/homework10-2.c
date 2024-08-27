#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	int i;
	int random[10];
	srand(time(NULL)); //난수 생성용 시드값 생성 
	
	for(i = 0; i < 10; i++)
	{
		random[i] = rand() % 9; //0에서 9사이의 난수 생성
		printf("배열 %d번의 값은 %d입니다.\n", i, random[i]);
	}	
	
	return 0;
}
