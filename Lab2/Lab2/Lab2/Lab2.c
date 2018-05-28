#include <Math.h>
#include <Stdio.h>
#include "Lab2.h"

int main(void)
{
	double x,y;
	int get;

	printf("Enter task number:");get = getchar();

	switch(get)
	{
	case 49: //1
		printf("Enter [X] value: "); scanf("%lf", &x);
		printf("Enter [Y] value: "); scanf("%lf", &y);
	
		printf("Return value: [%d]",func1(x,y) ? 1 : 0);
		break;

	case 50: //2
		printf("Enter [X] value: "); scanf("%lf",&x);
		printf("Run value: [%f]",func2(x));

		break;
	default:
		printf("Wrong value! [%c]", get);
	}

	getchar();getchar();

	return 0;
}