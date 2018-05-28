#include <stdio.h>
#include <math.h>

double func(double x)
{
	double Fun;
	Fun = (1-2*pow(sin(x),2))/(1+sin(2*x));
	return Fun;
}

int main(void)
{
    double x = 0;
	
	printf("X = ");
	scanf("%lf", &x);

	printf("%5.4f",func(x));
	
	getchar();getchar();
	return 0;
}
