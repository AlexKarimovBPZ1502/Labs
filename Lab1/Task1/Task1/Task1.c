#include <stdio.h>
#include <math.h>

int main(void)
{
	const double x = 7;
	double Fun = 0;

	Fun = (1-2*pow(sin(x),2))/(1+sin(2*x));

	printf("%5.4f",Fun);
	getchar();
	return 0;
}