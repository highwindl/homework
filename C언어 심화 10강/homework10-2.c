#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	int i;
	int random[10];
	srand(time(NULL)); //���� ������ �õ尪 ���� 
	
	for(i = 0; i < 10; i++)
	{
		random[i] = rand() % 9; //0���� 9������ ���� ����
		printf("�迭 %d���� ���� %d�Դϴ�.\n", i, random[i]);
	}	
	
	return 0;
}
