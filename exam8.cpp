#include <stdio.h>

typedef struct {
	char name[9];
	int test1;
	int test2;
	int test3;
	double avg;
	char sco;
}score;

void insertScore(score* temp)
{
	scanf("%s %d %d %d", temp->name, &temp->test1, &temp->test2, &temp->test3);
	temp->avg = (double)(temp->test1 + temp->test2 + temp->test3) / 3;
	if (temp->avg >= 90)
		temp->sco = 'A';
	else if (temp->avg >= 80 && temp->avg < 90)
		temp->sco = 'B';
	else if (temp->avg >= 70 && temp->avg < 80)
		temp->sco = 'C';
	else
		temp->sco = 'D';
}

int main()
{
	score ary[50];
	int num, i;
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		insertScore(&ary[i]);
	}

	for (i = 0; i < num; i++)
	{
		printf("%s %.1lf %c\n", ary[i].name, ary[i].avg, ary[i].sco);
	}
	return 0;
}