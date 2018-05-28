#include <math.h>
#include "Task5.h"

double func(double x)
{
	double Fun;
	Fun = (1-2*pow(sin(x),2))/(1+sin(2*x));
	return Fun;
}