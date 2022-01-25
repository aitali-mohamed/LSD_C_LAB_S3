#include<stdio.h>
#include<math.h>
#include<stdlib.h>


double polylag(double *X,double x,int i,int l)
{
	double y=X[i];
	double L=1;
	for(int j=0;j<l;j++)
	{
		if(y!=X[j])		
			L=L*((x-X[j])/(y-X[j]));
	}
	return L;		

}

double interpolag(double *X,double x,double(*f)(double),int l)
{
	double s=0;
	for(int i=0;i<l;i++)
	{
		s+=f(X[i])*polylag(X,x,i,l);
	}
	return s;

}

int main()
{
	double a, b;
	int n;
	FILE *fp1=NULL;
	FILE *fp2=NULL;
	fp1=fopen("inter_lagrange.txt","w");
	fp2=fopen("inter_lagrange2.txt","w");
	printf("entrer les bornes de l'intervalle\n");
	scanf("%lf",&a);
	scanf("%lf",&b);
	printf("entrer n\n");
	scanf("%d",&n);
	double X[n+1];
	double h = (b-a)/(n+1);
	for(int i=0;i<n+1;i++)
	{
		X[i]=a+(h*i);
	}
	int p=(n+1)*100;
	double Y_f[p];
	double Y_P[p];
	double x[p];
	h=(b-a)/(p);
	for(int j=0;j<p;j++){
		x[j]=a+(h*j);
		Y_f[j]=sin(x[j]);
		Y_P[j]=interpolag(X,x[j],sin,n+1);
		fprintf(fp1,"%lf\t %lf\n",x[j],Y_f[j]);
		fprintf(fp2,"%lf\t %lf\n",x[j],Y_P[j]);
		
	}


}
