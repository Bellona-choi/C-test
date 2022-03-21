#include<stdio.h>

int main()
{
	int decimal = 0;
	int binary[4] = {1,1,0,1};
	
	for (int i = 3;i >= 0; i--){
		int result = 1;
		
		for(int n = 0;n < i;n++){
			result *= 2;
		}
		decimal += binary[3-i]*result;  	
	}
	printf("%d\n", decimal);
	return 0;
}

