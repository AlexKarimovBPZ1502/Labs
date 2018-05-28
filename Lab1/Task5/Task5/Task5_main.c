#include <stdio.h>
#include <math.h>
#include "Task5.h"

double x = 0;
double Fun;

int main(void)
{

	printf("X = ");
	scanf("%lf", &x);

	printf("%5.4f",func(x));

	getchar(); getchar();
	return 0;
}

