#include <iostream>

using namespace std;

int main()
{
	int a,b,*ptr;
	a=10;
	ptr=&a;
	
	cout<<"\n*ptr="<<*ptr<<"\na="<<a<<endl;
	a++;
	++*ptr;
	cout<<"\n*ptr="<<*ptr<<"\na="<<a<<endl;
	
	return 0;	
}
