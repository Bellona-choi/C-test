#include <stdio.h>
int main()
{
	int A, B, MAX;
	printf("숫자A입력 : ");
	scanf("%d", &A);
	printf("숫자B입력 : ");
	scanf("%d", &B);
	
	if (A>B)
		MAX = A;
		
	else 
		MAX = B; 
	printf("큰 숫자는 %d 입니다", MAX);
	return 0; 
 } 
