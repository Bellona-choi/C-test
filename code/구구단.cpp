#include<stdio.h>
#include<math.h>

int main()
{
	printf("�� ���� ���ðڽ��ϱ�?:");
	scanf("%d");
	for (int i = 2; i < 10; i++)
	{
		printf(" %d�� \n",i);
			for(int j =1;j<10;j++){
				printf("%d x %d = %d\n",i,j,i*j);
			}
	}
	
}
