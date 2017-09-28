#include <stdio.h>

typedef struct {
	int num;
	int rate;
}Rank;

int main()
{
	Rank ary[10];
	int i, j;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &ary[i].num);
		ary[i].rate = 1;
		for (j = 0; j < i; j++)
		{
			if (ary[i].num < ary[j].num)
				ary[i].rate++;
			else
				ary[j].rate++;
		}
	}

	for (i = 0; i < 10; i++)
	{
		if (ary[i].rate == 3)
			printf("%d", ary[i].num);
	}

	for (i = 0; i < 10; i++)
	{
		if (ary[i].rate == 7)
			printf(" %d", ary[i].num);
	}
}