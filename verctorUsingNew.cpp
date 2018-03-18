#include <iostream>
using namespace std;

int main()
{
	int m;
	cout<<"Enter the number of elements in the given string:";
	cin>>m;
	try{
		int *ptr=new int[m];
		
		for(int i=0;i<m;++i)
			ptr[i]=i;
		
		cout<<"String elements are:"<<endl;
		
		for(int i=0;i<m;++i)
			cout<<ptr[i]<<endl;
			
	}catch(bad_alloc b){	
		cout<<"Array not declared."; 
		return 1;
	}

	return 0;
}
