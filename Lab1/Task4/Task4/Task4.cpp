#include <stdio.h>
#include <math.h>
#include "Task4.h"

double x = 0;
double Fun;

int main(void)
{

	printf("X = ");
	scanf("%lf", &x);

	func();
	printf("%5.4f",Fun);

	getchar(); getchar();
	return 0;
}

void func(void)
{
	Fun = (1-2*pow(sin(x),2))/(1+sin(2*x));
}