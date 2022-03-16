#include<stdio.h>
#include<math.h>
int main()
{
	int i = 1;
	int sum=0; 
	printf("N을 입력하세요:");
	scanf("%d",&sum);
	while(i<1000)
	{
		sum = sum + i;
		i++;
		printf("1에서 1000까지 합은 %d 입니다.",sum);
	}
		
}
