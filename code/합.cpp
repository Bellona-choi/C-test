#include<stdio.h>
#include<math.h>
int main()
{
	int i = 1;
	int sum=0; 
	printf("N�� �Է��ϼ���:");
	scanf("%d",&sum);
	while(i<1000)
	{
		sum = sum + i;
		i++;
		printf("1���� 1000���� ���� %d �Դϴ�.",sum);
	}
		
}
