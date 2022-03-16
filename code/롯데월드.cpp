#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int use, choice, inputyear, inputmd, today;
	int age, C, Exit;
	int pay = 0;
	time_t timer;
	struct tm* t;
	timer = time(NULL);
	t = localtime(&timer);
	const int baby=15000;
	const int all_1Day_Adult=59000,all_1Day_Teen=52000,all_1Day_Child=47000;
	const int all_Aft4_Adult=48000,all_Aft4_Teen=42000,all_Aft4_Child=36000;
	const int park_1Day_Adult=56000,park_1Day_Teen=50000,park_1Day_Child=46000;
	const int park_Aft4_Adult=45000,park_Aft4_Teen=40000,park_Aft4_Child=35000;
	do
	{
	
	printf("이용권을 선택해주세요.\n");
	printf("1. 종합이용권 + 민속박물관\n");
	printf("2. 파크이용권\n");
	scanf("%d",&use);
	
	printf("권종을 선택하세요.\n");
	printf("1. 1Day\n");
	printf("2. After\n");
	scanf("%d",&choice);
	
	printf("생년월일을 입력하세요\n");
	scanf("%4d %4d",&inputyear,&inputmd);
	
	today = (t->tm_year + 1900)*10000 + (t->tm_mon + 1)*100 + t->tm_mday;
	age = (today - (inputyear*10000+inputmd))/10000;
	
	
	printf("1. 없음 (나이우대는 자동처리)\n");
	printf("2. 장애인 우대\n");
	printf("3. 국가유공자 우대\n");
	printf("4. 휴가장병 우대\n");
	printf("5. 임산부 우대\n");
	printf("6. 다둥이 행복카드 우대\n");
	scanf("%d", &C);
	
		
	if(use==1){
		if(choice==1){
			if (age>=19 && age<=64)
			pay=pay+all_1Day_Adult;
			if (age>=13 && age<=18)
			pay=pay+all_1Day_Teen;
			if ((age>=3 && age<=12) || age>=65)
			pay=pay+all_1Day_Child;
			if (age<=2)
			pay=pay+baby;
		}
		else if (choice==2){
			if (age>=19 && age<=64)
			pay=pay+all_Aft4_Adult;
			if (age>=13 && age<=18)
			pay=pay+all_Aft4_Teen;
			if ((age>=3 && age<=12) || age>=65)
			pay=pay+all_Aft4_Child;
			if (age<=2)
			pay=pay+baby;
		}
	}
	if(use==2){
		if(choice==1){
			if (age>=19 && age<=64)
			pay=pay+park_1Day_Adult;
			if (age>=13 && age<=18)
			pay=pay+park_1Day_Teen;
			if ((age>=3 && age<=12) || age>=65)
			pay=pay+park_1Day_Child;
			if (age<=2)
			pay=pay+baby;
		}
		else if (choice==2){
			if (age>=19 && age<=64)
			pay=pay+park_Aft4_Adult;
			if (age>=13 && age<=18)
			pay=pay+park_Aft4_Teen;
			if ((age>=3 && age<=12) || age>=65)
			pay=pay+park_Aft4_Child;
			if (age<=2)
			pay=pay+baby;
		}
	}
	switch(C){
		case 2:
			pay = pay*0.5;
			break;
		case 3:
			pay = pay*0.5;
			break;
		case 4:
			pay = pay*0.51;
			break;
		case 5:
			pay = pay*0.5;
			break;
		case 6:
			pay = pay*0.7;
			break;		
	}
	
	printf("가격은 %d원 입니다.\n", pay);
	printf("계속 주문하시겠습니까?(1.주문, 2. 종료)\n");
	scanf("%d",&Exit) ;
	}while(Exit == 1);
	printf("이용해 주셔서 감사합니다.");
		return 0;		
}
