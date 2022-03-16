#include<stdio.h>
#include<math.h>

int main()
{
	printf("몇 단을 보시겠습니까?:");
	scanf("%d");
	for (int i = 2; i < 10; i++)
	{
		printf(" %d단 \n",i);
			for(int j =1;j<10;j++){
				printf("%d x %d = %d\n",i,j,i*j);
			}
	}
	
}
