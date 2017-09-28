#include <stdio.h>

typedef struct {
	char name[10];
	int a, b, c;
	double avg;
}score;

void read_data(score *sp)
{
	for (int i = 0; i < 10; i++) {
		scanf("%s %d %d %d", &(sp + i)->name, &(sp + i)->a, &(sp + i)->b, &(sp + i)->c);
	}
}
void cal_avg(score *sp)
{
	for (int i = 0; i < 10; i++) {
		(sp + i)->avg = ((sp + i)->a + (sp + i)->b + (sp + i)->c) / 3.0;
	}
}
void sort(score *sp)
{
	score tmp = { "",0,0,0,0 };
	for (int i = 9; i >0; i--) {
		for (int j = 0; j < i; j++) {
			if ((sp + j)->avg < (sp + i)->avg) {
				tmp = sp[j];
				sp[j] = sp[i];
				sp[i] = tmp;
			}
		}
	}
}
void print_score(score *sp)
{
	printf("%s %.2lf\n", sp[0].name, sp[0].avg);
	printf("%s %.2lf\n", sp[9].name, sp[9].avg);
	for(int i=7; i<10; i++)
		printf("%s %.2lf\n", sp[i].name, sp[i].avg);
}

int main()
{
	score s[10];
	read_data(s);
	cal_avg(s);
	sort(s);
	print_score(s);
}