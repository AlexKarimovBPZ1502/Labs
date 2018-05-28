#include <Math.h>
#include <Stdio.h>
#include "Lab2.h"

BOOL func1(double x, double y)
{

	BOOL Fun;
	
	double G, sinfi, fi, Kx, Ky; 

	if ((x < 0 && y < 0) || (x > 0 && y < 0))

		Fun = x > 1 || y > 1 ? FALSE : TRUE;

	else
	{
		G = sqrt(pow(x,2)+pow(y,2));
		sinfi = y/G;
		fi = asin(sinfi);
		Kx = 1*cos(fi);
		Ky = 1*sin(fi);

		Fun = (x > Kx || y > Ky) ? FALSE : TRUE;
	}
	return Fun;
}