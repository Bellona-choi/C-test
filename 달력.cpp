#include <stdio.h>

int main()
{
	const int last_day1 = 31, last_day3 = 31, last_day4 = 30, last_day5 = 31, last_day6 = 30, last_day7 = 31;
	const int last_day8 = 31,last_day9 = 30, last_day10= 31, last_day11 = 30, last_day12 = 31;
	int last_day2 = 28;
	int inputYear, inputMonth, inputMonthEND, days, dayName;
		
	for(;;) 
	{ 
		int last_day2 = 28; //추가해줘야 무조건29일로 안나온다 
		printf("년도를 입력하세요 : ");
		scanf("%d", &inputYear);
		printf("월 : ");
		scanf("%d", &inputMonth);
		if(inputYear == 0 && inputMonth == 0) {
			break;
		}
		// 1900년 부터 입력받은 inputYear까지 몇년 지났는지 확인
		days = (inputYear - 1900) * 365;
		// 윤년 몇개 있나?
		for(int index = 1901; index < inputYear; index++)
		{
			if( ((index % 4) == 0 && (index % 100) != 0) || ((index % 400) == 0) ) 
			{
				days++; // 윤년이 있는 해에는 366일 이므로.. 
			}
		} 
		if( ((inputYear % 4) == 0 && (inputYear % 100) != 0) || ((inputYear % 400) == 0) ) 
		{
			last_day2 = 29;
		}
		// 몇월?
		switch(inputMonth)
		 {
			case 12:
				days += last_day11;
			case 11:
				days += last_day10;
			case 10:
				days += last_day9;
			case 9:
				days += last_day8;
			case 8:
				days += last_day7;
			case 7:
				days += last_day6;
			case 6:
				days += last_day5;
			case 5:
				days += last_day4;
			case 4:
				days += last_day3;
			case 3:
				days += last_day2;
			case 2:
				days += last_day1;
		}
		
		// 무슨 요일?
		dayName = days % 7; 
		dayName++; // 0~6(월~일) =>  1~7(월~일) 
		if(dayName == 7)  // 0~6(일~토) 
		{
			dayName = 0;
		} 
		printf("\n               %d 년 %d월\n\n", inputYear, inputMonth);
		printf("%3s %3s %3s %3s %3s %3s %3s\n","일","월","화","수","목","금","토");
		// 앞에 공백 출력
		for(int index = 0; index < dayName; index++)
		{
			printf("%3s ","");
		} 
		// 월의 마지막날 
		switch(inputMonth) 
		{
			case 12:
				inputMonthEND = last_day12;
				break;
			case 11:
				inputMonthEND = last_day11;
				break;
			case 10:
				inputMonthEND = last_day10;
				break;
			case 9:
				inputMonthEND = last_day9;
				break;
			case 8:
				inputMonthEND = last_day8;
				break;
			case 7:
				inputMonthEND = last_day7;
				break;
			case 6:
				inputMonthEND = last_day6;
				break;
			case 5:
				inputMonthEND = last_day5;
				break;
			case 4:
				inputMonthEND = last_day4;
				break;
			case 3:
				inputMonthEND = last_day3;
				break;
			case 2:
				inputMonthEND = last_day2;
				break;
			case 1:
				inputMonthEND = last_day1;
				break;
		}
		for(int index = 1, enter = dayName + 1; index <= inputMonthEND; index++, enter++) 
		{
			printf("%3d ", index);
			if(enter % 7 == 0)
			{
				printf("\n");
			}
		}
		printf("\n");	
	}

	
	return 0;
}













