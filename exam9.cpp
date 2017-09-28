#include <stdio.h>

typedef struct{
	double a;
	double b;
}complex;

complex add(complex A, complex B)
{
	complex temp = { 0.0, 0.0 };
	temp.a = A.a + B.a;
	temp.b = A.b + B.b;
	return temp;
}

int main()
{
	complex A, B, res;
	scanf("%lf %lf", &A.a, &A.b);
	scanf("%lf %lf", &B.a, &B.b);
	res = add(A, B);
	printf("%.1lf + %.1lfi", res.a, res.b);
	return 0;
}