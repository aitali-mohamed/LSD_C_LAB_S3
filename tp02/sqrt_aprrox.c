#include "funchead.h"


int main()
{
	printf("for n=3\n");
	printf(" approximation using dichotomie methode\n");
	printf(" %f \n",Dicho(f,0,3,3));
	printf(" approximation using newton methode\n");
	printf(" %f \n",Newton(f,g,3,3));
	for(int i=10;i<31;i=i*3)
	{
		printf("for n=%d\n",i);
		printf(" approximation using dichotomie methode\n");
		printf(" %f \n",Dicho(f,0,3,i));
		printf(" approximation using newton methode\n");
		printf(" %f \n",Newton(f,g,3,i));	
	
	}

	return 0;
}
