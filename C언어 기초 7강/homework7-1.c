#include<stdio.h>

int main()
{
    int n, result;
    int i;
  
    result = 0;
  
    printf("반복횟수 입력:"); 
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {   
        if(i % 2) //i / 2 의 몫이 0이아니면(홀수) 참이므로 if가 실행 
        {     
            result += i;
        }
    }
    printf("입력받은 값은 %d이며, 1부터 %d까지 더한값은 %d 입니다.\n", n, n, result); 
	
	return 0;	
}
