#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int inputyear, inputmd, today,AGE1,start;
int Exit, use, C, A, choice, age;
int pay = 0, totalpay = 0;
int index = 0;
int orderlist[100][6] = {0,};
const int BABY = 15000;
const int ALL_DAY[3] = {59000, 52000, 47000};
const int ALL_Aft4[3] = {48000, 42000, 36000};
const int PARK_DAY[3] = {56000, 50000, 46000};
const int PARK_Aft4[3] = {45000, 40000, 35000};
int tm_year, tm_mday, tm_mon; 
void order(){
	time_t timer;
	struct tm* t;
	timer = time(NULL);
	t = localtime(&timer);
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
	
	printf("몇개를 주문하시겠습니까?(최대 10개)\n");
	scanf("%d", &A);
	if((A <= 10)&&(A == 0)){
	
		printf("다시 입력해주세요.");
		
		}
	
	today = (t->tm_year + 1900)*10000 + (t->tm_mon + 1)*100 + t->tm_mday;
	age = (today - (inputyear*10000+inputmd))/10000;
		
	printf("우대사항을 선택하세요.\n");
	printf("1. 없음 (나이우대는 자동처리)\n");
	printf("2. 장애인 우대\n");
	printf("3. 국가유공자 우대\n");
	printf("4. 휴가장병 우대\n");
	printf("5. 임산부 우대\n");
	printf("6. 다둥이 행복카드 우대\n");
	scanf("%d", &C);
}

void age_ticket(){
	time_t timer;
	struct tm* t;
	timer = time(NULL);
	t = localtime(&timer);
	if (age>=19 && age<=64)
		AGE1 = 1;
	if (age>=13 && age<=18)
		AGE1 = 2;
	if (age>=3 && age<=12) 
		AGE1 = 3;
	if (age<=2)
		AGE1 = 4;
	if (age>=65)
		AGE1 = 5;	
					
	if(use==1){
		if(choice==1){
			if (age>=19 && age<=64)
				pay = pay + ALL_DAY[0];
			if (age>=13 && age<=18)
				pay = pay + ALL_DAY[1];
			if ((age>=3 && age<=12) || age>=65)
				pay = pay + ALL_DAY[2];
			if (age<=2)
				pay = pay + BABY;
		}
		else if (choice==2){
			if (age>=19 && age<=64)
				pay = pay + ALL_Aft4[0];
			if (age>=13 && age<=18)
				pay = pay + ALL_Aft4[1];
			if ((age>=3 && age<=12) || age>=65)
				pay = pay + ALL_Aft4[2];
			if (age<=2)
				pay = pay + BABY;
		}
	}
	if(use==2){
		if(choice==1){
			if (age>=19 && age<=64)
				pay = pay + PARK_DAY[0];
			if (age>=13 && age<=18)
				pay = pay + PARK_DAY[1];
			if ((age>=3 && age<=12) || age>=65)
				pay = pay + PARK_DAY[2];
			if (age<=2)
				pay = pay + BABY;
		}
		else if (choice==2){
			if (age>=19 && age<=64)
				pay = pay + PARK_Aft4[0];
			if (age>=13 && age<=18)
				pay = pay + PARK_Aft4[1];
			if ((age>=3 && age<=12) || age>=65)
				pay = pay + PARK_Aft4[2];
			if (age<=2)
				pay = pay + BABY;
		}
	}
	switch(C){
		case 2 :
			pay = pay * 0.5;
			break;
		case 3 :
			pay = pay * 0.5;
			break;
		case 4 :
			pay = pay * 0.51;
			break;
		case 5 :
			pay = pay * 0.5;
			break;
		case 6 :
			pay = pay * 0.7;
			break;		
	}
	//선 택 
	
		
	totalpay += pay;
	printf("오늘은 %4d년 %2d월 %2d일 입니다.\n",t->tm_year+1900, t->tm_mon+1, t->tm_mday);
	printf("나이는 %d 입니다. 우대사항은: %d번 입니다.\n", age, C);
	printf("가격은 %d원 입니다.\n", pay*A);
	pay = 0;
	index++;
	printf("계속 주문하시겠습니까?(1.주문, 2. 종료)\n");
	scanf("%d",&Exit);
}

void new_order(){
	orderlist[index][0] = use;
	orderlist[index][1] = choice;
	orderlist[index][2] = A;
	orderlist[index][3] = AGE1;
	orderlist[index][4] = pay*A;
	orderlist[index][5] = C;

	printf("이용해 주셔서 감사합니다.\n");
	printf("=================네버랜드=================\n");
	printf("\n시간\t이용권\t\t권종\t연령\t수량\t금액\t 우대권\n");
	for (int i =0; i < index;i++)
	{
		printf("%d", today);
		switch(orderlist[i][0])
		{
			case 1:
				printf("%s","종합이용권 ");
				break;
			case 2:
				printf("%s","파크이용권 ");
				break;
			default:
				break; 
		}
		switch(orderlist[i][1])
		{
			case 1:
				printf("\t%s","주간권");
				break;
			case 2:
				printf("\t%s","야간권 ");
				break;
			default:
				break; 
		}
		if((orderlist[i][3]) == 1)
		{
			printf("\t%s","어른 ");
		} 
		else if ((orderlist[i][3]) == 2){
			printf("\t%s""청소년 ");
		}
		else if ((orderlist[i][3]) == 3){
			printf("\t%s""어린이 ");
		}
		else if ((orderlist[i][3]) == 4){
			printf("\t%s""유아 ");
		}
		else if ((orderlist[i][3]) == 5){
			printf("\t%s""어르신 ");
		}
		
		printf("\t%d \t%d", orderlist[i][2],orderlist[i][4]);
		switch(orderlist[i][5])
		{
			case 1:
				printf("\t%s\n","없음");
				break;
			case 2:
				printf("\t%s\n","장애인 우대 ");
				break;
			case 3:
				printf("\t%s\n","국가유공자 우대 ");
				break;
			case 4:
				printf("\t%s\n","휴가장병 우대 ");
				break;
			case 5:
				printf("\t%s\n","임산부 우대 ");
				break;	
			case 6:
				printf("\t%s\n","다둥이 행복카드 우대 ");
				break;			
			default:
				break; 
		}
		
	}
	printf("\n================================================\n");
	printf("입장료는 %d 원 입니다.", totalpay);	
	
	
	printf("새로운 주문을 원하십니까?\n");
	printf("1. 새로운 주문 \n");
	printf("2. 프로그램 종료\n");
	scanf("%d", &start);
}



int main()
{
	
	time_t timer;
	struct tm* t;
	timer = time(NULL);
	t = localtime(&timer);
	 
	do{
		
		do
		{
		order();
		age_ticket();
		
		}while(Exit == 1);
		
		
		FILE *filePointer = fopen("report.csv","a");
		for (int i = 0; i< index;i++) {
			fprintf(filePointer, "%d,%d,%d,%d,%d,%d,%d\n", today, orderlist[i][0],orderlist[i][1],orderlist[i][2],orderlist[i][3],orderlist[i][4],orderlist[i][5]);
		}
		
		new_order();
		totalpay = 0;
		index = 0;
	}while(start == 1);
	return 0;		
}
