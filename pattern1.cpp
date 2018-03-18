#include <iostream>

using namespace std;

int main()
{
	for(int i=0;i<10;++i)
	{
		int j;

		for( j=0;j<=i;++j)
			cout<<"*";
		for(int k=1;k<=20-i-j;++k)
			cout<<" ";
		for(j=0;j<=i;++j)
			cout<<"*";
		cout<<"\n";
	}
	return 0;
}
