#include <stdio.h>
#include <math.h>

extern void func(void);
extern double x,Fun;

int main(void)
{

	printf("X = ");
	scanf("%lf", &x);

	func();
	printf("%5.4f",Fun);

	getchar(); getchar();
	return 0;
}

