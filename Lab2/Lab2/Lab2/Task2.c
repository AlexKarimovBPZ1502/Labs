#include <math.h>
#include <stdio.h>

double func2(double x)
{
	double Run;
	Run = x < - 3.5 ? -2*x/-4*x+1 : 4*pow(x,2)+2*x-19;
	return Run;
}