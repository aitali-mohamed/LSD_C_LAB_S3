#include<stdio.h>
#include<stdlib.h>




float **sum(float **A, float **B, int n)
{
	float** C = float**(malloc(n*sizeof(float*)));
	for(int i=0;i<n;i++)
	{
		C[i]=float*(malloc(n*sizeof(float)));
	}
	for(i=0;int i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			
			C[i][j]=A[i][j]+B[i][j];
		}
	}
}


float **multi(float **A, float **B, int n)
{
	float** C = float**(malloc(n*sizeof(float*)));
	for(int i=0;i<n;i++)
	{
		C[i]=float*(malloc(n*sizeof(float)));
	}
	for(i=0;i<n,i++)
	{
		for(int j=0;i<n,j++)
		{
			C[i][j]=0;
			for(int k=0;k<n,k++)
			{
			
			C[i][j]+=A[i][k]*B[k][j];
			}

		}

	}
	
}


float **trans(float **A, int n)
{
	float** C = float**(malloc(n*sizeof(float*)));
	for(int i=0;i<n;i++)
	{
		C[i]=float*(malloc(n*sizeof(float)));
	}
	for(i=0;i<n,i++)
	{
		for(int j=0;i<n,j++)
		{
			C[i][j]=A[j][i];
		}	

}




float ** dia_m(float ** A,int n)
{
	
	float** C = float**(malloc(2*sizeof(float*)));
	for(int i=0;i<2;i++)
	{
		C[i]=float*(malloc(n*sizeof(float)));
	}
	
	for(i=0;i<n;i++)
	{
		C[0][i]=A[i][i];
		C[1][i]=A[0][n-1-i];
				
	}

}
