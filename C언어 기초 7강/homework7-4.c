#include<stdio.h>

int main()
{
    int n;
    int i, j = 0;

    printf("�ݺ�Ƚ�� �Է�:"); 
    scanf("%d", &n);
     
    for(i = 1; i <= n; i++)
    {
        if(j < i)
        {
             i--;
             j++;
             printf("*");
        }
        else
        {
            j = 0;
            printf("\n");
        }
    }
}
