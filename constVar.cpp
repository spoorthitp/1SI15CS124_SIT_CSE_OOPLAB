#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const int x=7;
	
	cout<<"\nThe value of const variable is "<<x<<endl;
	
	const int arraySize=10;
	
	int s[arraySize];
	
	for(int i=0; i<arraySize;++i)
		s[i]=2+2*i;
		
	cout<<"\nElemnts"<<setw(13)<<"value"<<endl;	
	
//out is in tabular for

	for(int i=0;i<arraySize;++i)
		cout<<setw(7)<<i<<setw(13)<<s[i]<<endl;	
		
	return 0;
}
