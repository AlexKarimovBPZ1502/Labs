#include <stdio.h>
#include <math.h>
#include "Task3.h"

int main(void)
{
    double x = 7;

	printf("X = ");
	scanf("%lf", &x);

	printf("%5.4f",func(x));
	
	getchar();getchar();
	return 0;
}

double func(double x)
{
	double Fun;
	Fun = (1-2*pow(sin(x),2))/(1+sin(2*x));
	return Fun;
}