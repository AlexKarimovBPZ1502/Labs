#include <Math.h>
#include <Stdio.h>
#include "Task5.h"

int sum1(double eps)
{
	double a = 0;
	double a1 = 0;
	int i = 0;

for (;;)
{
	a = (pow(-1.0, i)) * ((pow(2.0, (i+1)) / ((pow(2.0, 2*i)) + 1.0)));
	a1 = fabs(a);
	

	if ((a < 0) && (a1 <= eps))
		break;
	i++;
}
return i;
}