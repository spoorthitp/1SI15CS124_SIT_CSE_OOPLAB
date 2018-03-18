#include <iostream>

using namespace std;

class myClass{
	public:
	int i;
	myClass* operator->(){return this;}
};

int main()
{
	myClass ob;
	ob->i=10;
	cout<<ob.i<<" "<<ob->i;
	return 0;
}
