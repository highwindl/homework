#include<stdio.h>

int main()
{
    int n, result;
    int i;
  
    result = 0;
  
    printf("�ݺ�Ƚ�� �Է�:"); 
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {   
        if(i % 2) //i / 2 �� ���� 0�̾ƴϸ�(Ȧ��) ���̹Ƿ� if�� ���� 
        {     
            result += i;
        }
    }
    printf("�Է¹��� ���� %d�̸�, 1���� %d���� ���Ѱ��� %d �Դϴ�.\n", n, n, result); 
	
	return 0;	
}
