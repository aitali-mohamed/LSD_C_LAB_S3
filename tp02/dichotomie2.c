#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float f(float x)
{
	return pow(x,2)-2;
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



float dichotomie2(float(*f)(float),float a,float b,float e)
{	// calculate the number of iteration n sush as |an-a|<e
	double x = log((b-a)/e);
	x=floor(x)+1;
	int n = x;
	return Dicho(f,a,b,n);
	
	
}


int main()
{
	float an;
	an=dichotomie2(f,1,3,0.001);
	printf("%f",an);
}
