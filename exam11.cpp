#include <stdio.h>
#include <malloc.h>

typedef struct {
	int sex;
	double weight;
	double height;
}student;

void gradeMan(student *, int *);
void gradeWoman(student *, int *);

int main()
{
	int num, grade[3] = {};
	student *sp;
	scanf("%d", &num);
	sp = (student *)malloc(sizeof(student)*num);
	for (int i = 0; i < num; i++) {
		scanf("%d %lf %lf", &(sp + i)->sex, &(sp + i)->weight, &(sp + i)->height);
		if ((sp + i)->sex == 1)
			gradeMan(sp + i, grade);
		else
			gradeWoman(sp + i, grade);
	}
	for (int i = 0; i < 3; i++) {
		printf("%d ", grade[i]);
	}
	
}

void gradeMan(student *sp, int *ip)
{
	double h = sp->height;
	double w = sp->weight;

	if (h < 165) {
		if (w < 60)
			ip[0]++;
		else if (60 <= w && w < 70)
			ip[2]++;
		else
			ip[1]++;
	}
	else if (165 <= h && h < 175) {
		if (w < 60)
			ip[1]++;
		else if (60 <= w && w < 70)
			ip[0]++;
		else
			ip[2]++;
	}
	else {
		if (w < 60)
			ip[2]++;
		else if (60 <= w && w < 70)
			ip[1]++;
		else
			ip[0]++;
	}
}
void gradeWoman(student *sp, int *ip)
{
	double h = sp->height;
	double w = sp->weight;

	if (h < 165) {
		if (w < 50)
			ip[0]++;
		else if (50 <= w && w < 60)
			ip[2]++;
		else
			ip[1]++;
	}
	else if (165 <= h && h < 175) {
		if (w < 60)
			ip[1]++;
		else if (60 <= w && w < 70)
			ip[0]++;
		else
			ip[2]++;
	}
	else {
		if (w < 60)
			ip[2]++;
		else if (60 <= w && w < 70)
			ip[1]++;
		else
			ip[0]++;
	}
}