#include <stdio.h>

typedef struct {
	int up;
	int down;
}fraction;

int main()
{
	fraction x1, x2;
	scanf("%d %d %d %d", &x1.up, &x1.down, &x2.up, &x2.down);
	printf("%d/%d\n", x1.up*x2.up, x2.down*x1.down);
}