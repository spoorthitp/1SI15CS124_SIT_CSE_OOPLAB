/*Calculate the average rainfall in a region based on the number of months the user enters. Along
with this, find variance and standard deviation.*/

#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

double fnMean(double,int);
double fnVariance(double,int,double);

int main()
{
	int iNMonths;
	double dRand,dSum=0, dSqrSum, dMean, dVar,dSD;
	srand(time(NULL));
	cout<<"\nEnter the number of months:";
	cin>>iNMonths;
	if(iNMonths==0)
	{
		cout<<"\nCan't compute!!! Aborting!!!"<<endl;
		return 1;
	}
	for(int i=0;i<iNMonths;++i)
	{	
		dRand=(rand()%2001+2000)/100;
		dSum+=dRand;
		dSqrSum+=(dRand*dRand);
	}

	dMean=fnMean(dSum,iNMonths);
	dVar=fnVariance(dSqrSum,iNMonths,dMean);
	dSD=sqrt(dVar);
	cout<<endl;
	cout<<"\n*Mean of the rainfall across "<<iNMonths<<" months is : "<<dMean<<endl;
	cout<<"\n**Variance of the rainfall across "<<iNMonths<<" months is : "<<dVar<<endl;
	cout<<"\n***Standard Deviation of the rainfall across "<<iNMonths<<" months is : "<<dSD<<endl<<endl;
}

double fnMean(double dSum,int iNMonths){
	return dSum/iNMonths;
}

double fnVariance(double dSqrSum,int iNMonths,double fnMean){
	return	((dSqrSum/iNMonths)-fnMean*fnMean);
}