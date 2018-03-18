#include <iostream>

using namespace std;

void fetchModify(const int *);
int main()
{
	int iaArr1[10]={1,2,3,4,5,6,7,8,9,10};
	
//	int iaArr2[10]={1,2,3,4,5,6,7,8,9,10};
	
	fetchModify(iaArr1);
	
	iaArr1[7]=17;
	
	return 0;
}

void fetchModify(const int *xPtr)
{
	int i;
	
	for(i=0;i<10;++i)
		cout<<xPtr[i]<<"\t";
	cout<<endl;
	
//	xPtr[7]=7;
	cout<<endl;
}
