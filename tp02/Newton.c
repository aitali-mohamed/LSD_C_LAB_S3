#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float f(float x)
{
	return (x*x)-2;
}

float g(float x)
{
	return 2*x;
}

float Newton(float(*f)(float),float(*g)(float),float a0,int n)
{
	float an;
	int i;
	for (i=0;i<n;i++)
	{
		an=a0-(f(a0)/g(a0));
		a0=an;
	}
	return an;
}

int main()
{
	float an;
	an=Newton(f,g,3,3);
	printf("%f\n",an);
}
