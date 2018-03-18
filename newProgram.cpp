#include <iostream>

using namespace std;

int main()
{
	int *a= new int[20];
	cout<<"\nEnter your values:";
	for(int i=0;i<20;++i)
		cin>>a[i];
	cout<<"\nEntered values are:";
	
	for(int i=0;i<20;++i)
		cout<<a[i]<<endl;

	return 0;
}
