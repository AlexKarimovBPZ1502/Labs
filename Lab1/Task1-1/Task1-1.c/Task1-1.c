
#include <Math.h>
#include <Stdio.h>

int main(void)
{
	double x = 0;
	double Fun = 0;

	printf("X = ");
	scanf("%lf",&x);
	
	Fun = (1-2*pow(sin(x),2))/(1+sin(2*x));

	printf("%5.4f",Fun);
	getchar();getchar();

	return 0;
}