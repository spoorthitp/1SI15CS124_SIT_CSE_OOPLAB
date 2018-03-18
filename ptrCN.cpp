#include <iostream>

using namespace std;

int main()
{
	int x,y;
	
	int *const ptr=&x;
	
	cout<<"\nx="<<x<<endl;
	
	x++;

	cout<<"\nx="<<x<<endl;
	
	(*ptr)++;
	
	cout<<"\nx="<<x<<endl;

	ptr=&y;
	
	cout<<endl;
	
	return 0;	
}
