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
	int tickettime1[2][6] = {0,};
	int tickettype1[2][6] = {0,};
	
 	while( fscanf(fp,"%d,%d,%d,%d,%d,%d,%d,%d,%d\n",&year[count],&month[count],&day[count],&tickettype[count],&tickettime[count],&age[count],&ticketsu[count],&ticketprice[count],&woodae[count]) != -1)
	{
		count++;														 
	}
	fclose(fp);	
	FILE *fp2 = fopen("typedata.csv","w");
	for (int index=0;index<count;index++){
		printf("%d��,%d��,%d��,%d,%d,%d,%d,%d��,%d\n",year[index],month[index],day[index],tickettype[index],tickettime[index],age[index],ticketsu[index],ticketprice[index],woodae[index]);
	// tickettime1 = �����̿��[0][0]~[0][4], ��Ʈ�̿�� [1][0]~[1][4]
	//tickettype1 = �ְ���[0][0]~[0][4], �߰���[1][0]~[1][4] 
	//�����̿�� �ݾ� tickettime1[0][5], ��Ʈ�̿�� �ݾ� tickettime1[1][5] , �ְ��Ǳݾ� tickettype1[0][5], �߰��Ǳݾ�[1][5] 
		if(tickettype[index]==1&&tickettime[index]==1)
		{
			
		
				switch(age[index])
				{
				case 1:
					tickettype1[0][0]+=ticketsu[index];
					tickettime1[0][0]+=ticketsu[index];
					tickettype1[0][5]+=ticketprice[index]*ticketsu[index];
					tickettime1[0][5]+=ticketprice[index]*ticketsu[index];
					break;
				case 2:
					tickettype1[0][1]+=ticketsu[index];
					tickettime1[0][1]+=ticketsu[index];
					tickettype1[0][5]+=ticketprice[index]*ticketsu[index];
					tickettime1[0][5]+=ticketprice[index]*ticketsu[index];
					break;
				case 3:
					tickettype1[0][2]+=ticketsu[index];
					tickettime1[0][2]+=ticketsu[index];
					tickettype1[0][5]+=ticketprice[index]*ticketsu[index];
					tickettime1[0][5]+=ticketprice[index]*ticketsu[index];
					break;
				case 4:
					tickettype1[0][3]+=ticketsu[index];
					tickettime1[0][3]+=ticketsu[index];
					tickettype1[0][5]+=ticketprice[index]*ticketsu[index];
					tickettime1[0][5]+=ticketprice[index]*ticketsu[index];
					break;
				case 5:
					tickettype1[0][4]+=ticketsu[index];
					tickettime1[0][4]+=ticketsu[index];
					tickettype1[0][5]+=ticketprice[index]*ticketsu[index];
					tickettime1[0][5]+=ticketprice[index]*ticketsu[index];
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
					tickettype1[0][5]+=ticketprice[index]*ticketsu[index];
					tickettime1[1][5]+=ticketprice[index]*ticketsu[index];
					break;
				case 2:
					tickettype1[1][1]+=ticketsu[index];
					tickettime1[1][1]+=ticketsu[index];
					tickettype1[0][5]+=ticketprice[index]*ticketsu[index];
					tickettime1[1][5]+=ticketprice[index]*ticketsu[index];
					break;
				case 3:
					tickettype1[1][2]+=ticketsu[index];
					tickettime1[1][2]+=ticketsu[index];
					tickettype1[0][5]+=ticketprice[index]*ticketsu[index];
					tickettime1[1][5]+=ticketprice[index]*ticketsu[index];
					break;
				case 4:
					tickettype1[1][3]+=ticketsu[index];
					tickettime1[1][3]+=ticketsu[index];
					tickettype1[0][5]+=ticketprice[index]*ticketsu[index];
					tickettime1[1][5]+=ticketprice[index]*ticketsu[index];
					break;
				case 5:
					tickettype1[1][4]+=ticketsu[index];
					tickettime1[1][4]+=ticketsu[index];
					tickettype1[0][5]+=ticketprice[index]*ticketsu[index];
					tickettime1[1][5]+=ticketprice[index]*ticketsu[index];
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
					tickettype1[1][5]+=ticketprice[index]*ticketsu[index];
					tickettime1[0][5]+=ticketprice[index]*ticketsu[index];
					break;
				case 2:
					tickettype1[0][1]+=ticketsu[index];
					tickettime1[0][1]+=ticketsu[index];
					tickettype1[1][5]+=ticketprice[index]*ticketsu[index];
					tickettime1[0][5]+=ticketprice[index]*ticketsu[index];
					break;
				case 3:
					tickettype1[0][2]+=ticketsu[index];
					tickettime1[0][2]+=ticketsu[index];
					tickettype1[1][5]+=ticketprice[index]*ticketsu[index];
					tickettime1[0][5]+=ticketprice[index]*ticketsu[index];
					break;
				case 4:
					tickettype1[0][3]+=ticketsu[index];
					tickettime1[0][3]+=ticketsu[index];
					tickettype1[1][5]+=ticketprice[index]*ticketsu[index];
					tickettime1[0][5]+=ticketprice[index]*ticketsu[index];
					break;
				case 5:
					tickettype1[0][4]+=ticketsu[index];
					tickettime1[0][4]+=ticketsu[index];
					tickettype1[1][5]+=ticketprice[index]*ticketsu[index];
					tickettime1[0][5]+=ticketprice[index]*ticketsu[index];
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
					tickettype1[1][5]+=ticketprice[index]*ticketsu[index];
					tickettime1[1][5]+=ticketprice[index]*ticketsu[index];
					break;
				case 2:
					tickettype1[1][1]+=ticketsu[index];
					tickettime1[1][1]+=ticketsu[index];
					tickettype1[1][5]+=ticketprice[index]*ticketsu[index];
					tickettime1[1][5]+=ticketprice[index]*ticketsu[index];
					break;
				case 3:
					tickettype1[1][2]+=ticketsu[index];
					tickettime1[1][2]+=ticketsu[index];
					tickettype1[1][5]+=ticketprice[index]*ticketsu[index];
					tickettime1[1][5]+=ticketprice[index]*ticketsu[index];
					break;
				case 4:
					tickettype1[1][3]+=ticketsu[index];
					tickettime1[1][3]+=ticketsu[index];
					tickettype1[1][5]+=ticketprice[index]*ticketsu[index];
					tickettime1[1][5]+=ticketprice[index]*ticketsu[index];
					break;
				case 5:
					tickettype1[1][4]+=ticketsu[index];
					tickettime1[1][4]+=ticketsu[index];
					tickettype1[1][5]+=ticketprice[index]*ticketsu[index];
					tickettime1[1][5]+=ticketprice[index]*ticketsu[index];
					break;
				default:
					break;
				}
			}
	
		
	}
	printf("����, ,�����̿��, ��ũ�̿��, �ְ���, �߰��� \n");
	printf("����: \t%d,\t\t%d,\t%d,\t%d\n", tickettype1[0][0],tickettype1[1][0],tickettime1[0][0],tickettime1[1][0]);
	printf("���: %d,\t\t%d,\t%d,\t%d\n", tickettype1[0][1],tickettype1[1][1],tickettime1[0][1],tickettime1[1][1]);
	printf("û�ҳ�: %d,\t\t%d,\t%d,\t%d\n", tickettype1[0][2],tickettype1[1][2],tickettime1[0][2],tickettime1[1][2]);
	printf("�: \t%d,\t\t%d,\t%d,\t%d\n", tickettype1[0][3],tickettype1[1][3],tickettime1[0][3],tickettime1[1][3]);
	printf("�����: %d,\t\t%d,\t%d,\t%d\n", tickettype1[0][4],tickettype1[1][4],tickettime1[0][4],tickettime1[1][4]);
	printf("����: \t%d,%12d,\t%d,%10d\n", 	tickettype1[0][5],tickettype1[1][5],tickettime1[0][5],tickettime1[1][5]);
	for (int i=0;i<=5;i++){
		fprintf(fp2,"%d,%d,%d,%d\n",tickettype1[0][i],tickettype1[1][i],tickettime1[0][i],tickettime1[1][i]);
	}
	fclose(fp2);
	return 0;
}

