#include <stdio.h>

int main() {
	int score[21][10] = {0};
	int sum[21] = {0};
	int ave[21] = {0};
	int subjectSum[10] = {0};
	float subjectAve[10]; 
	int studentCount = 0;
	int subjectCount = 0;
	
	printf("�л� �� �Է� : ");
	scanf("%d", &studentCount);
	printf("���� �� �Է� : ");
	scanf("%d", &subjectCount);
	
	for(int i = 0; i < studentCount; i++) 
	{
		printf("Koposw%d �л��� ���� %d���� ���ʴ�� �Է��ϼ���: ", i, subjectCount);
		for(int i2 = 0; i2 < subjectCount; i2++) 
		{
			scanf("%d", &score[i][i2]);
		}
		
	}

	for(int i = 0; i <studentCount; i++)
	{
		int sum = 0;
		float ave = 0;
		for(int i2 = 0; i2 < subjectCount; i2++)
		{
			sum += score[i][i2];
			subjectSum[i2] += score[i][i2];
		}
		ave = sum / (float)subjectCount;
		printf("Koposw%d �л��� ���� %d, ��� %5.2f\n", i, sum, ave);
	}

	for(int i = 0; i < subjectCount; i++)
	{
		subjectAve[i] = subjectSum[i] / (float)studentCount;
		printf("����%d ��� %5.2f\n", i, subjectAve[i]);
	}
	return 0;
}
