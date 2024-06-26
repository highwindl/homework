#include<stdio.h>

int main()
{
    int n;
    int i, j;
    int star = 1;

    printf("반복횟수 입력:"); 
    scanf("%d", &n);
     
    for(i = 1; i <= n; i++)
    {
        for(j = 0; j < n-i; j++)
        {
            printf(" ");
        }      

        for(j = 0; j < star; j++)
        {
            printf("*");
        }      
        
        star+=2;

        printf("\n");
    }	
}
