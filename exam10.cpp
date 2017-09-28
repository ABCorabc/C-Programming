#include <stdio.h>

typedef struct {
	int high;
	int low;
	char isPass;
	int standard;
	int sub;
}result;

void passorfail(result *);

int main()
{
	result r;
	scanf("%d %d %d", &r.high, &r.low, &r.standard);
	passorfail(&r);
	printf("%d %c\n", r.sub, r.isPass);
}

void passorfail(result *rp)
{
	rp->sub = rp->high - rp->low;
	if (rp->sub <= rp->standard)
		rp->isPass = 'P';
	else
		rp->isPass = 'F';
}