#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int inputyear, inputmd, today;
	int Exit, use, C, A, choice, age;
	int pay = 0;
	int index = 0;
	int orderlist[100][6] = {0,};
	time_t timer;
	struct tm* t;
	timer = time(NULL);
	t = localtime(&timer);
	const int BABY = 15000;
	const int ALL_DAY[3] = {59000, 52000, 47000};
	const int ALL_Aft4[3] = {48000, 42000, 36000};
	const int PARK_DAY[3] = {56000, 50000, 46000};
	const int PARK_Aft4[3] = {45000, 40000, 35000};
	 
	int tm_year, tm_mday, tm_mon; 
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
	
	printf("��� �ֹ��Ͻðڽ��ϱ�?(�ִ� 10��)\n");
	scanf("%d", &A);
	if((A <= 10)&&(A == 0)){
	
		printf("�ٽ� �Է����ּ���.");
		break;
		}

	today = (t->tm_year + 1900)*10000 + (t->tm_mon + 1)*100 + t->tm_mday;
	age = (today - (inputyear*10000+inputmd))/10000;
	
	printf("�������� �����ϼ���.\n");
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
	
	orderlist[index][0] = use;
	orderlist[index][1] = choice;
	orderlist[index][2] = A;
	orderlist[index][3] = age;
	orderlist[index][4] = pay*A;
	orderlist[index][5] = C;
	
	printf("������ %4d�� %2d�� %2d�� �Դϴ�.\n",t->tm_year+1900, t->tm_mon+1, t->tm_mday);
	printf("���̴� %d �Դϴ�. ��������: %d�� �Դϴ�.\n", age, C);
	printf("������ %d�� �Դϴ�.\n", pay*A);
	pay = 0;
	index++;
	printf("��� �ֹ��Ͻðڽ��ϱ�?(1.�ֹ�, 2. ����)\n");
	scanf("%d",&Exit);

	}while(Exit == 1);
	
	printf("�̿��\t����\t����\����\t�ݾ�\t����\n");
	for(int i = 0; i < index; i++)
	{
		printf("%d\t %d\t %d\t %d\t %d\t %d\n", orderlist[i][0], orderlist[i][1],orderlist[i][2],orderlist[i][3],orderlist[i][4],orderlist[index][5]);
	}
	
	
		
		
	 
	return 0;		
}
