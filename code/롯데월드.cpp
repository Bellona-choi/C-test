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
	
	printf("�̿���� �������ּ���.\n");
	printf("1. �����̿�� + �μӹڹ���\n");
	printf("2. ��ũ�̿��\n");
	scanf("%d",&use);
	
	printf("������ �����ϼ���.\n");
	printf("1. 1Day\n");
	printf("2. After\n");
	scanf("%d",&choice);
	
	printf("��������� �Է��ϼ���\n");
	scanf("%4d %4d",&inputyear,&inputmd);
	
	today = (t->tm_year + 1900)*10000 + (t->tm_mon + 1)*100 + t->tm_mday;
	age = (today - (inputyear*10000+inputmd))/10000;
	
	
	printf("1. ���� (���̿��� �ڵ�ó��)\n");
	printf("2. ����� ���\n");
	printf("3. ���������� ���\n");
	printf("4. �ް��庴 ���\n");
	printf("5. �ӻ�� ���\n");
	printf("6. �ٵ��� �ູī�� ���\n");
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
	
	printf("������ %d�� �Դϴ�.\n", pay);
	printf("��� �ֹ��Ͻðڽ��ϱ�?(1.�ֹ�, 2. ����)\n");
	scanf("%d",&Exit) ;
	}while(Exit == 1);
	printf("�̿��� �ּż� �����մϴ�.");
		return 0;		
}
