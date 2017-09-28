#include <stdio.h>

typedef struct {
	int x;
	int y;
	int z;
}vector;

int main()
{
	vector a, b, c;
	scanf("%d %d %d", &a.x, &a.y, &a.z);
	scanf("%d %d %d", &b.x, &b.y, &b.z);
	c.x = a.x*b.x;
	c.y = a.y*b.y;
	c.z = a.z*b.z;
	printf("%d %d %d\n", c.x, c.y, c.z);
	printf("%d\n", c.x + c.y + c.z);
}