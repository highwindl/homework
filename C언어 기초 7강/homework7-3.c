#include<stdio.h>

int main()
{
    int n;
    int i = 0, j = 0;

    printf("�ݺ�Ƚ�� �Է�:"); 
    scanf("%d", &n);
     
    while(i <= n)
    {
        i++;        

        while(j < i)
        {
            printf("*");
            j++;
        }      

        printf("\n");

        j = 0;
    }	
}
