#include <stdio.h>

int main()
{
	int A, B, C, D, E, MAX,MIN;
 	printf("����A�Է� : ");
	scanf("%d", &A);
	printf("����B�Է� : ");
	scanf("%d", &B);
	printf("����C�Է� : ");
	scanf("%d", &C);
	printf("����D�Է� : ");
	scanf("%d", &D);
	printf("����E�Է� : ");
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
		printf("�ִ밪��%d �Դϴ�.",MAX);
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
		printf("�ּҰ���%d �Դϴ�.",MIN);
	
	return 0; 
 }  
