#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	int random = 0;	
	srand(time(NULL)); //난수 생성용 시드값 생성 
	
	random = rand() % 9; //0에서 9사이의 난수 생성
	
	printf("생성된 난수는 %d 입니다.\n", random); 
	
	return 0;
}
