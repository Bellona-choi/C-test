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
		printf("%d년,%d월,%d일,%d원\n",year[index],month[index],day[index],ticketprice[index]);
	// tickettime1 = 이용권(종합이용권, 파트이용권) tickettype1 = 이용시간(주간권, 야간권) 
	// ticketprice1 = 이용권에 따른 매출(조합이용권 매출, 파크이용권 매출)  ticketprice2 = 이용시간에대한 매출(주간매출, 야간매출) 
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
	printf("연도 월  일 총액\n");
	for (int i=0;i<=k;i++)
	{
		printf("%d %2d %3d %d\n",yeardata[i][0],yeardata[i][1],yeardata[i][2],yeardata[i][3]);
		
		fprintf(fp1,"%d년,%d월,%d일,%d원\n",yeardata[i][0],yeardata[i][1],yeardata[i][2],yeardata[i][3]);
		
	}	
	printf("\n");
	fclose(fp1);
	return 0;
	
}
