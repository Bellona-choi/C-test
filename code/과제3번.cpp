#include <stdio.h>

int main()
{
	int A, B, C, D, E, MAX,MIN;
 	printf("숫자A입력 : ");
	scanf("%d", &A);
	printf("숫자B입력 : ");
	scanf("%d", &B);
	printf("숫자C입력 : ");
	scanf("%d", &C);
	printf("숫자D입력 : ");
	scanf("%d", &D);
	printf("숫자E입력 : ");
	scanf("%d", &E);
	MAX = A;
	MIN = A;
	if (B > MAX){
		MAX = B;
	}
	if (C > MAX){
		MAX = C;
	}
	if (D > MAX){
		MAX = D;
	}
	if (E > MAX){
		MAX = E;
		printf("최대값은%d 입니다.",MAX);
	}
	
	if (B < MIN){
		MIN = B;
	}
	if (C < MIN){
		MIN = C;
	}
	if (D < MIN){
		MIN = D;
	}
	if (E < MIN){
		MIN = E;
		
	}
	else 
		printf("최소값은%d 입니다.",MIN);
	
	return 0; 
 }  
