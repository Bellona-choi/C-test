#include <stdio.h>

int main()
{
	const int last_day1 = 31, last_day3 = 31, last_day4 = 30, last_day5 = 31, last_day6 = 30, last_day7 = 31;
	const int last_day8 = 31,last_day9 = 30, last_day10= 31, last_day11 = 30, last_day12 = 31;
	int last_day2 = 28;
	int inputYear, inputMonth, inputMonthEND, days, dayName;
		
	for(;;) 
	{ 
		int last_day2 = 28; //�߰������ ������29�Ϸ� �ȳ��´� 
		printf("�⵵�� �Է��ϼ��� : ");
		scanf("%d", &inputYear);
		printf("�� : ");
		scanf("%d", &inputMonth);
		if(inputYear == 0 && inputMonth == 0) {
			break;
		}
		// 1900�� ���� �Է¹��� inputYear���� ��� �������� Ȯ��
		days = (inputYear - 1900) * 365;
		// ���� � �ֳ�?
		for(int index = 1901; index < inputYear; index++)
		{
			if( ((index % 4) == 0 && (index % 100) != 0) || ((index % 400) == 0) ) 
			{
				days++; // ������ �ִ� �ؿ��� 366�� �̹Ƿ�.. 
			}
		} 
		if( ((inputYear % 4) == 0 && (inputYear % 100) != 0) || ((inputYear % 400) == 0) ) 
		{
			last_day2 = 29;
		}
		// ���?
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
		
		// ���� ����?
		dayName = days % 7; 
		dayName++; // 0~6(��~��) =>  1~7(��~��) 
		if(dayName == 7)  // 0~6(��~��) 
		{
			dayName = 0;
		} 
		printf("\n               %d �� %d��\n\n", inputYear, inputMonth);
		printf("%3s %3s %3s %3s %3s %3s %3s\n","��","��","ȭ","��","��","��","��");
		// �տ� ���� ���
		for(int index = 0; index < dayName; index++)
		{
			printf("%3s ","");
		} 
		// ���� �������� 
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













