#include<stdio.h>
#include<stdlib.h>


float func(float x)
{
	return x*x-2;
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

int main()
{
	
	float y=Dicho(func,0,3,10);
	printf("%f\n",y);	


}
