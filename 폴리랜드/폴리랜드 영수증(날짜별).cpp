#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() 
{
	FILE *fp = fopen("report.csv","r");
	const int MAX = 100;
	int count = 0;
	int year[MAX],month[MAX],day[MAX],tickettype[MAX],tickettime[MAX],age[MAX],ticketsu[MAX],ticketprice[MAX],woodae[MAX],years,months,days;
	int yeardata[MAX][4]={0,};
	
 	while( fscanf(fp,"%d,%d,%d,%d,%d,%d,%d,%d,%d\n",&year[count],&month[count],&day[count],&tickettype[count],&tickettime[count],&age[count],&ticketsu[count],&ticketprice[count],&woodae[count]) != -1)
	{
		count++;														 
	}
		
	FILE *fp1 = fopen("daydata.csv","w");
	
	for (int index=0;index<count;index++){
		printf("%d��,%d��,%d��,%d��\n",year[index],month[index],day[index],ticketprice[index]);
	// tickettime1 = �̿��(�����̿��, ��Ʈ�̿��) tickettype1 = �̿�ð�(�ְ���, �߰���) 
	// ticketprice1 = �̿�ǿ� ���� ����(�����̿�� ����, ��ũ�̿�� ����)  ticketprice2 = �̿�ð������� ����(�ְ�����, �߰�����) 
	}
	fclose(fp);
	int k=0, index=0;
	yeardata[k][0]=year[0],yeardata[k][1]=month[0],yeardata[k][2]=day[0],yeardata[k][3]=ticketprice[0];
	for (int i=1;i<count;i++){
		if (yeardata[k][0]==year[i] && yeardata[k][1]==month[i] && yeardata[k][2]==day[i]){
			yeardata[k][3]+=ticketprice[i];
		}
		else {
			k++;
			yeardata[k][0]=year[i],yeardata[k][1]=month[i],yeardata[k][2]=day[i],yeardata[k][3]=ticketprice[i];
		}
	}
	printf("���� ��  �� �Ѿ�\n");
	for (int i=0;i<=k;i++)
	{
		printf("%d %2d %3d %d\n",yeardata[i][0],yeardata[i][1],yeardata[i][2],yeardata[i][3]);
		
		fprintf(fp1,"%d��,%d��,%d��,%d��\n",yeardata[i][0],yeardata[i][1],yeardata[i][2],yeardata[i][3]);
		
	}	
	printf("\n");
	fclose(fp1);
	return 0;
	
}
