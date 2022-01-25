#include<stdio.h>
#include <math.h>


float f(float x)
{
	return (x*x)-2;
}

float g(float x)
{
	return 2*x;
}


float Dicho(float(*f)(float),float a, float b,int n)
{
	float c;
	for(int i=0;i<n;i++)
	{
		c = (a+b)/2;
		if(f(c)>=0)
			b=c;
		else
			a=c;	
	}
	
	return c;


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

