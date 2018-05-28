#include <Math.h>
#include "Task6.h"

double sum1(int n)
{
	double a = 0;
	int i = 0;

while (i <= (n-1))
{
	a = a + (pow(-1.0, i)) * ((pow(2.0, (i+1)) / ((pow(2.0, 2*i)) + 1.0)));
	i++;
}

return a;
}

#include <conio.h> 
#include <stdio.h> 

#define LENGTH 128 

void main() { 
char buffer[LENGTH]; 

scanf("%127s", buffer); 
printf("%s", buffer); 

getch(); 
}