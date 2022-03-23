#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() 
{
	FILE *fp = fopen("report.csv","r");
	const int MAX = 100;
	int count = 0;
	int year[MAX],month[MAX],day[MAX],tickettype[MAX],tickettime[MAX],age[MAX],ticketsu[MAX],ticketprice[MAX],woodae[MAX];
	int age1=0, age2=0, age3=0, age4=0, age5=0;
	int tickettime1[2][5] = {0,};
	int tickettype1[2][5] = {0,};
	int ticketprice1[2] ={0,}; 
	int ticketprice2[2] ={0,}; 
 	while( fscanf(fp,"%d,%d,%d,%d,%d,%d,%d,%d,%d\n",&year[count],&month[count],&day[count],&tickettype[count],&tickettime[count],&age[count],&ticketsu[count],&ticketprice[count],&woodae[count]) != -1)
	{
		count++;														 
	}
	fclose(fp);	
	
	for (int index=0;index<count;index++){
		printf("%d년,%d월,%d일,%d,%d,%d,%d,%d원,%d\n",year[index],month[index],day[index],tickettype[index],tickettime[index],age[index],ticketsu[index],ticketprice[index],woodae[index]);
	// tickettime1 = 이용권(종합이용권, 파트이용권) tickettype1 = 이용시간(주간권, 야간권) 
	// ticketprice1 = 이용권에 따른 매출(조합이용권 매출, 파크이용권 매출)  ticketprice2 = 이용시간에대한 매출(주간매출, 야간매출) 
		if(tickettype[index]==1&&tickettime[index]==1)
		{
			
		
				switch(age[index])
				{
				case 1:
					tickettype1[0][0]+=ticketsu[index];
					tickettime1[0][0]+=ticketsu[index];
					ticketprice1[0]+=ticketprice[index]*ticketsu[index];
					ticketprice2[0]+=ticketprice[index]*ticketsu[index];
					break;
				case 2:
					tickettype1[0][1]+=ticketsu[index];
					tickettime1[0][1]+=ticketsu[index];
					ticketprice1[0]+=ticketprice[index]*ticketsu[index];
					ticketprice2[0]+=ticketprice[index]*ticketsu[index];
					break;
				case 3:
					tickettype1[0][2]+=ticketsu[index];
					tickettime1[0][2]+=ticketsu[index];
					ticketprice1[0]+=ticketprice[index]*ticketsu[index];
					ticketprice2[0]+=ticketprice[index]*ticketsu[index];
					break;
				case 4:
					tickettype1[0][3]+=ticketsu[index];
					tickettime1[0][3]+=ticketsu[index];
					ticketprice1[0]+=ticketprice[index]*ticketsu[index];
					ticketprice2[0]+=ticketprice[index]*ticketsu[index];
					break;
				case 5:
					tickettype1[0][4]+=ticketsu[index];
					tickettime1[0][4]+=ticketsu[index];
					ticketprice1[0]+=ticketprice[index]*ticketsu[index];
					ticketprice2[0]+=ticketprice[index]*ticketsu[index];
					break;
				default:
					break;
				}
			}
			else if (tickettype[index]==1&&tickettime[index]==2){
				
				
				switch(age[index])
				{
				case 1:
					tickettype1[1][0]+=ticketsu[index];
					tickettime1[1][0]+=ticketsu[index];
					ticketprice1[0]+=ticketprice[index]*ticketsu[index];
					ticketprice2[1]+=ticketprice[index]*ticketsu[index];
					break;
				case 2:
					tickettype1[1][1]+=ticketsu[index];
					tickettime1[1][1]+=ticketsu[index];
					ticketprice1[0]+=ticketprice[index]*ticketsu[index];
					ticketprice2[1]+=ticketprice[index]*ticketsu[index];
					break;
				case 3:
					tickettype1[1][2]+=ticketsu[index];
					tickettime1[1][2]+=ticketsu[index];
					ticketprice1[0]+=ticketprice[index]*ticketsu[index];
					ticketprice2[1]+=ticketprice[index]*ticketsu[index];
					break;
				case 4:
					tickettype1[1][3]+=ticketsu[index];
					tickettime1[1][3]+=ticketsu[index];
					ticketprice1[0]+=ticketprice[index]*ticketsu[index];
					ticketprice2[1]+=ticketprice[index]*ticketsu[index];
					break;
				case 5:
					tickettype1[1][4]+=ticketsu[index];
					tickettime1[1][4]+=ticketsu[index];
					ticketprice1[0]+=ticketprice[index]*ticketsu[index];
					ticketprice2[1]+=ticketprice[index]*ticketsu[index];
					break;
				default:
					break;
				}
			}
			else if (tickettype[index]==2&&tickettime[index]==1){
			
				
				switch(age[index])
				{
				case 1:
					tickettype1[0][0]+=ticketsu[index];
					tickettime1[0][0]+=ticketsu[index];
					ticketprice1[1]+=ticketprice[index]*ticketsu[index];
					ticketprice2[0]+=ticketprice[index]*ticketsu[index];
					break;
				case 2:
					tickettype1[0][1]+=ticketsu[index];
					tickettime1[0][1]+=ticketsu[index];
					ticketprice1[1]+=ticketprice[index]*ticketsu[index];
					ticketprice2[0]+=ticketprice[index]*ticketsu[index];
					break;
				case 3:
					tickettype1[0][2]+=ticketsu[index];
					tickettime1[0][2]+=ticketsu[index];
					ticketprice1[1]+=ticketprice[index]*ticketsu[index];
					ticketprice2[0]+=ticketprice[index]*ticketsu[index];
					break;
				case 4:
					tickettype1[0][3]+=ticketsu[index];
					tickettime1[0][3]+=ticketsu[index];
					ticketprice1[1]+=ticketprice[index]*ticketsu[index];
					ticketprice2[0]+=ticketprice[index]*ticketsu[index];
					break;
				case 5:
					tickettype1[0][4]+=ticketsu[index];
					tickettime1[0][4]+=ticketsu[index];
					ticketprice1[1]+=ticketprice[index]*ticketsu[index];
					ticketprice2[0]+=ticketprice[index]*ticketsu[index];
					break;
				default:
					break;
				}
			}
			else if (tickettype[index]==2&&tickettime[index]==2){
			
				switch(age[index])
				{
				case 1:
					tickettype1[1][0]+=ticketsu[index];
					tickettime1[1][0]+=ticketsu[index];
					ticketprice1[1]+=ticketprice[index]*ticketsu[index];
					ticketprice2[1]+=ticketprice[index]*ticketsu[index];
					break;
				case 2:
					tickettype1[1][1]+=ticketsu[index];
					tickettime1[1][1]+=ticketsu[index];
					ticketprice1[1]+=ticketprice[index]*ticketsu[index];
					ticketprice2[1]+=ticketprice[index]*ticketsu[index];
					break;
				case 3:
					tickettype1[1][2]+=ticketsu[index];
					tickettime1[1][2]+=ticketsu[index];
					ticketprice1[1]+=ticketprice[index]*ticketsu[index];
					ticketprice2[1]+=ticketprice[index]*ticketsu[index];
					break;
				case 4:
					tickettype1[1][3]+=ticketsu[index];
					tickettime1[1][3]+=ticketsu[index];
					ticketprice1[1]+=ticketprice[index]*ticketsu[index];
					ticketprice2[1]+=ticketprice[index]*ticketsu[index];
					break;
				case 5:
					tickettype1[1][4]+=ticketsu[index];
					tickettime1[1][4]+=ticketsu[index];
					ticketprice1[1]+=ticketprice[index]*ticketsu[index];
					ticketprice2[1]+=ticketprice[index]*ticketsu[index];
					break;
				default:
					break;
				}
			}
	
		
	}
	printf("구분, ,종합이용권, 파크이용권, 주간권, 야간권 \n");
	printf("유아: \t%d,\t\t%d,\t%d,\t%d\n", tickettype1[0][0],tickettype1[1][0],tickettime1[0][0],tickettime1[1][0]);
	printf("어린이: %d,\t\t%d,\t%d,\t%d\n", tickettype1[0][1],tickettype1[1][1],tickettime1[0][1],tickettime1[1][1]);
	printf("청소년: %d,\t\t%d,\t%d,\t%d\n", tickettype1[0][2],tickettype1[1][2],tickettime1[0][2],tickettime1[1][2]);
	printf("어른: \t%d,\t\t%d,\t%d,\t%d\n", tickettype1[0][3],tickettype1[1][3],tickettime1[0][3],tickettime1[1][3]);
	printf("노약자: %d,\t\t%d,\t%d,\t%d\n", tickettype1[0][4],tickettype1[1][4],tickettime1[0][4],tickettime1[1][4]);
	printf("매출: \t%d,%12d,\t%d,%10d\n", 	ticketprice1[0],ticketprice1[1],ticketprice2[0],ticketprice2[1]);

	return 0;
}

