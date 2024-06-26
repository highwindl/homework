#include<stdio.h>

int main()
{
    int n;
    int i = 0, j = 0;

    printf("반복횟수 입력:"); 
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
