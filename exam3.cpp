#include <stdio.h>

typedef struct {
	int hour, min, sec;
}time;

int main()
{
	time t1 = { 0,0,0 }, t2 = { 0,0,0 }, t3;
	
	scanf("%d %d %d", &t1.hour, &t1.min, &t1.sec);
	scanf("%d %d %d", &t2.hour, &t2.min, &t2.sec);
	
	t3 = t2;
	
	if (t2.sec - t1.sec < 0) {
		t3.sec += 60 - t1.sec;
		t3.min--;
	}
	else
		t3.sec -= t1.sec;

	if (t2.min - t1.min < 0) {
		t3.min += 60 - t1.min;
		t3.hour--;
	}
	else
		t3.min -= t1.min;
	t3.hour -= t1.hour;
	
	
	printf("%d %d %d", t3.hour,t3.min,t3.sec);
}