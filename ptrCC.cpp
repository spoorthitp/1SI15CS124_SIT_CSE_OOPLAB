#include <iostream>

using namespace std;

void fetchModify(int *);

int main()
{
	int iaArr1[10]={1,2,3,4,5,6,7,8,9,10};
	int iaArr2[10]={1,2,3,4,5,6,7,8,9,10};
	
	fetchModify(iaArr1);
	
	fetchModify(iaArr2);
	
	return 0;
}

void fetchModify(int *ptr)
{
	int i;
	
	for(i=0;i<10;++i)
		cout<<ptr[i]<<"\t";
	cout<<endl;
	
	for(i=0;i<10;++i)
		ptr[i]=9;
	
	for(i=0;i<10;++i)
		cout<<ptr[i]<<"\t";
	cout<<endl<<endl;
}	
