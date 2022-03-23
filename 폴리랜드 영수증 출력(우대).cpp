#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() 
{
	FILE *fp = fopen("report.csv","r");
	const int MAX = 100;
	int count = 0;
	int year[MAX],month[MAX],day[MAX],tickettype[MAX],tickettime[MAX],age[MAX],ticketsu[MAX],ticketprice[MAX],woodae[MAX];
	int woodae1=0, woodae2=0, woodae3=0, woodae4=0, woodae5=0, woodae6=0;	
 	while( fscanf(fp,"%d,%d,%d,%d,%d,%d,%d,%d,%d\n",&year[count],&month[count],&day[count],&tickettype[count],&tickettime[count],&age[count],&ticketsu[count],&ticketprice[count],&woodae[count]) != -1)
	{
		count++;														 
	}
	fclose(fp);	
	
	for (int index=0;index<count;index++){
		printf("%d��,%d��,%d��,%d,%d,%d,%d,%d��,%d\n",year[index],month[index],day[index],tickettype[index],tickettime[index],age[index],ticketsu[index],ticketprice[index],woodae[index]);
	
		switch(woodae[index])
		{
			case 1:
				woodae1++;
				break;
			case 2:
				woodae2++;
				break;
			case 3:
				woodae3++;
				break;
			case 4:
				woodae4++;
				break;
			case 5:
				woodae5++;
				break;
			case 6:
				woodae6++;
				break;
			default:
				break;
		}
	}
	printf("�� �Ǹ� Ƽ�ϼ�, %d\n", count);
	printf("��� ����, %d\n", woodae1);
	printf("����� ���, %d\n", woodae2);
	printf("���������� ���, %d\n", woodae3);
	printf("�ް��庴 ���, %d\n", woodae4);
	printf("�ӻ�� ���, %d\n", woodae5);
	printf("�ٵ��� �ູī�� ���, %d\n", woodae6);
	return 0;
}

