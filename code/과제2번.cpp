#include <stdio.h>
int main()
{
	int A, B, MAX;
	printf("����A�Է� : ");
	scanf("%d", &A);
	printf("����B�Է� : ");
	scanf("%d", &B);
	
	if (A>B)
		MAX = A;
		
	else 
		MAX = B; 
	printf("ū ���ڴ� %d �Դϴ�", MAX);
	return 0; 
 } 
