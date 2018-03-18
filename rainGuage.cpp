#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

class RainGauge{
	friend double fnCalAvg(RainGauge [],int);
	
	private :
		double dRainInCm;
		char cLocation[20];
	
	public:
		RainGauge();
		void fnReadMeasurement();
		void fnDispReading();
};

RainGauge::RainGauge()
{
	dRainInCm=0.0;
	strcpy(cLocation,"\0");
}

void RainGauge::fnDispReading()
{
	cout<<cLocation<<":"<<dRainInCm<<" cms\n";
}

void RainGauge::fnReadMeasurement()
{
	dRainInCm=(rand()%2100+2000)/100;
	int n=rand()%19+1;
	int i;
	for(i=0;i<n;++i)
	{	
		char ch=rand()%26+65;
		cLocation[i]=ch;
	}
	cLocation[i]='\0';
}
double fnCalAvg(RainGauge r[],int iNum)
{
	int i;
	double dAvgRain=0;
	
	for(i=0;i<iNum;++i)
		dAvgRain+=r[i].dRainInCm;
	
	dAvgRain/=iNum;
	return dAvgRain;
}

int main()
{
	double dAvgRainFall;
	int i,iNum;
	
	srand(time(NULL));
	
	cout<<"\nEnter the number of cities:";
	cin>>iNum;
	RainGauge rainSensorArray[iNum];
	for(i=0;i<iNum;++i)
		rainSensorArray[i].fnReadMeasurement();
	
	cout<<"\nRainfall information.";
	cout<<endl;
	for(i=0;i<iNum;++i)
		rainSensorArray[i].fnDispReading();
	
	cout<<"\nAverage rainfall:"<<fnCalAvg(rainSensorArray,iNum);
	
	return 0;
}
