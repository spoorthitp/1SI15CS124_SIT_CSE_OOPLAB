/*Program to inter-convert temperatures between the two scales of Celsius
**and Fahreneheit and display the result. The inpur is taken from the user*/

#include <iostream>

using namespace std;

class Temp{
	double f, c;		// f stores temperature in fahrenheit and c stores temperature in celsius

	void fnReadCelsius();
	void fnReadFahrenheit();

public:

	void fnConvertFToC();
	void fnConvertCToF();
};

void Temp::fnReadCelsius()
{
	//function to read temperature in celsius
	cout<<"\nEnter the temperature in celsius:";
	cin>>c;
	cout<<endl;
}

void Temp::fnReadFahrenheit()
{
	//function to read temperature in fahrenheit
	cout<<"\nEnter the temperature in fahrenheit:";
	cin>>f;
	cout<<endl;
}

void Temp::fnConvertCToF()
{
	//function to perform celsius to fahrenheit conversion and display it
	fnReadCelsius();
	f=c*(9/5.0)+32;
	cout<<"\n"<<c<<" C="<<f<<" F"<<endl;
}

void Temp::fnConvertFToC()
{
	//function to perform fahrenheit to celsius conversion and display it
	fnReadFahrenheit();
	c=(f-32)*(5/9.0);
	cout<<"\n"<<f<<" F="<<c<<" C"<<endl;
}

int main()
{
	Temp t;
	int iCh;

	cout<<"\n1. Fehrenheit to Celsius";
	cout<<"\n2. Celsius to Fahrenheit";
	cout<<"\nEnter your choice:";
	cin>>iCh;
	switch(iCh)
	{
		case 1:t.fnConvertFToC();
			break;
		case 2:t.fnConvertCToF();
			break;
		default:
			cout<<"\n!!!Invalid Choice!!!";
	}
	cout<<endl;

	return 0;
}	