#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	int i;
	int random[10];
	int result = 0;		
	srand(time(NULL)); //���� ������ �õ尪 ���� 
	
	for(i = 0; i < 10; i++)
	{
		random[i] = rand() % 9; //0���� 9������ ���� ����
		result += random[i];
		printf("�迭 %d���� ���� %d�Դϴ�.\n", i, random[i]);
	}	
			
	printf("10���� �迭�� ���� %d, ����� %d, �������� %d �Դϴ�.\n", result, result / 10, result % 10); 
	
	return 0;
}
