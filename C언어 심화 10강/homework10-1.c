#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	int random = 0;	
	srand(time(NULL)); //���� ������ �õ尪 ���� 
	
	random = rand() % 9; //0���� 9������ ���� ����
	
	printf("������ ������ %d �Դϴ�.\n", random); 
	
	return 0;
}
