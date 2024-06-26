#include<stdio.h>

int main()
{
    int n;
    int i, j = 0;

    printf("반복횟수 입력:"); 
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
