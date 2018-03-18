#include <iostream>

using namespace std;

class Matrix{
	int **matrix;
	
	int rows,columns;
	
	public:
		Matrix(){}
		Matrix(Matrix&m){matrix=m.matrix;rows=m.rows;columns=m.columns;}
		
		//Matrix operator=(const Matrix&);
		//Matrix operator+(const Matrix&)const;
		//Matrix operator-(const Matrix&)const;
		//int operator==(const Matrix&)const;
		
		friend ostream& operator<<(ostream&,const Matrix&);
		friend istream& operator>>(istream&,Matrix&);
};

Matrix::Matrix(int a,int b)
{
	rows=a;
	columns=b;
	for(int row=0;row<rows;row++)
		matrix[row]=new int [columns];
}

istream& operator>>(istream& in,Matrix& m)
{
	int i,j;
	cout<<"enter the matrix elements:"<<endl;
	
	for(i=0;i<m.rows;++i)
		for(j=0;j<m.columns;++j)
			in>>m.matrix[i][j];
	return in;
}

ostream& operator<< (ostream& out,const Matrix& m)
{
	for(int i=0;i<m.rows;++i)
		for(int j=0;j<m.columns;++j)
			cout<<m.matrix[i][j]<<"\t";
		cout<<endl;
		return out;
}

int main()
{
	Matrix m(10)(10);
	cin>>m;
	cout<<m;
	return 0;
}
