#include <stdio.h>

int main()
{
	int year;
	printf("원하는 년도를 입력하세요:");
	scanf("%d",&year);
	if((year % 4 == 0) &&(year % 100 != 0)||(year %400 ==0))
	{
		printf("윤년입니다.");
	}
	else{
		printf("윤년이 아닙니다."); 
	}
	return 0;
}
