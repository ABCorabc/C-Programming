#include <stdio.h>

typedef struct {
	int x;
	int y;
	int z;
}vector;

int main()
{
	vector v1, v2;
	scanf("%d %d %d", &v1.x, &v1.y, &v1.z);
	scanf("%d %d %d", &v2.x, &v2.y, &v2.z);
	printf("%d %d %d\n", v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
}