#include <stdio.h>

typedef struct{
	char name[10];
	int score;
}student;

int main()
{
	student sary[5]= { "",0 };
	int total = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%s %d", &sary[i].name, &sary[i].score);
		total += sary[i].score;
	}
	for (int i = 0; i < 5; i++) {
		if (sary[i].score <= total / 5.0)
			printf("%s\n", sary[i].name);
	}
}