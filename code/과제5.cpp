#include <stdio.h>

int main()
{
	int year;
	int month1 = 1;
	
	int month_day[12] = {31,28,31,30,31,31,30,31,30,31,30,31};
	char month_str[10];
	scanf("%d",&year);
	
	if((year % 4 == 0) &&(year % 100 != 0) ||(year % 400 == 0))  
   	{
		
   		printf("%d 岿:%d/老\n", month1, month_day[0]); 
   		printf("%d 岿:%d/老\n", month1 +1, month_day[1]+1); 
   		printf("%d 岿:%d/老\n", month1 +2, month_day[2]); 
    	printf("%d 岿:%d/老\n", month1 +3, month_day[3]); 
    	printf("%d 岿:%d/老\n", month1 +4, month_day[4]); 
    	printf("%d 岿:%d/老\n", month1 +5, month_day[5]); 
    	printf("%d 岿:%d/老\n", month1 +6, month_day[6]); 
    	printf("%d 岿:%d/老\n", month1 +7, month_day[7]); 
    	printf("%d 岿:%d/老\n", month1 +8, month_day[8]); 
    	printf("%d 岿:%d/老\n", month1 +9, month_day[9]); 
    	printf("%d 岿:%d/老\n", month1 +10, month_day[10]); 
    	printf("%d 岿:%d/老\n", month1 +11, month_day[-0]); 
	}
	else{
	  
    	printf("%d 岿:%d/老\n", month1, month_day[0]); 
   		printf("%d 岿:%d/老\n", month1 +1, month_day[1]); 
   		printf("%d 岿:%d/老\n", month1 +2, month_day[2]); 
    	printf("%d 岿:%d/老\n", month1 +3, month_day[3]); 
    	printf("%d 岿:%d/老\n", month1 +4, month_day[4]); 
    	printf("%d 岿:%d/老\n", month1 +5, month_day[5]); 
    	printf("%d 岿:%d/老\n", month1 +6, month_day[6]); 
    	printf("%d 岿:%d/老\n", month1 +7, month_day[7]); 
    	printf("%d 岿:%d/老\n", month1 +8, month_day[8]); 
    	printf("%d 岿:%d/老\n", month1 +9, month_day[9]); 
    	printf("%d 岿:%d/老\n", month1 +10, month_day[10]); 
    	printf("%d 岿:%d/老\n", month1 +11, month_day[-0]); 
	}
    
	return 0;
}
