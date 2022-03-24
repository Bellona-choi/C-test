#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() 
{
	FILE *fp = fopen("report.csv","r");
	const int MAX = 100;
	int count = 0;
	int year[MAX],month[MAX],day[MAX],tickettype[MAX],tickettime[MAX],age[MAX],ticketsu[MAX],ticketprice[MAX],woodae[MAX];
	int woodae1[6]={0,};	
 	while( fscanf(fp,"%d,%d,%d,%d,%d,%d,%d,%d,%d\n",&year[count],&month[count],&day[count],&tickettype[count],&tickettime[count],&age[count],&ticketsu[count],&ticketprice[count],&woodae[count]) != -1)
	{
		count++;														 
	}
	fclose(fp);	
		
	FILE *fp3 = fopen("woodaedata.csv","w");
	for (int index=0;index<count;index++){
		printf("%d��,%d��,%d��,%d,%d,%d,%d,%d��,%d\n",year[index],month[index],day[index],tickettype[index],tickettime[index],age[index],ticketsu[index],ticketprice[index],woodae[index]);
	
		switch(woodae[index])
		{
			case 1:
				woodae1[0]++;
				break;
			case 2:
				woodae1[1]++;
				break;
			case 3:
				woodae1[2]++;
				break;
			case 4:
				woodae1[3]++;
				break;
			case 5:
				woodae1[4]++;
				break;
			case 6:
				woodae1[5]++;
				break;
			default:
				break;
		}
	}
	printf("�� �Ǹ� Ƽ�ϼ�, %d\n", count);
	printf("��� ����, %d\n", woodae1[0]);
	printf("����� ���, %d\n", woodae1[1]);
	printf("���������� ���, %d\n", woodae1[2]);
	printf("�ް��庴 ���, %d\n", woodae1[3]);
	printf("�ӻ�� ���, %d\n", woodae1[4]);
	printf("�ٵ��� �ູī�� ���, %d\n", woodae1[5]);
	fprintf(fp3,"%d\n",count);
	for(int i=0;i<6;i++)
	{
	
		fprintf(fp3,"%d\n",woodae1[i]);
	}
	fclose(fp3);
	return 0;
}

