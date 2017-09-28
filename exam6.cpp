#include <stdio.h>
#include <malloc.h>
#include <cstring>
typedef struct {
	char name[20];
	int s1, s2, s3;
}student;

char getGrade(int);
double getAvg(int, int, int);

int main()
{
	student *sp;
	int N;
	scanf("%d", &N);
	sp = (student *)malloc(sizeof(student)*N);

	for (int i = 0; i < N; i++) {
		scanf("%s %d %d %d", (sp + i)->name, &(sp + i)->s1, &(sp + i)->s2, &(sp + i)->s3);
		printf("%s %.1f %c\n", (sp + i)->name, getAvg((sp + i)->s1, (sp + i)->s2, (sp + i)->s3), getGrade(getAvg((sp + i)->s1, (sp + i)->s2, (sp + i)->s3)));
	}
	
}
char getGrade(int totalScore)
{
	char res;
	if (totalScore >= 90)
		res = 'A';
	else if (totalScore >= 80)
		res = 'B';
	else if (totalScore >= 70)
		res = 'C';
	else
		res = 'F';
	return res;
}
double getAvg(int a, int b, int c)
{
	return (a + b + c) / 3.0;
}