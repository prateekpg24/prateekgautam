#include<iostream>

using namespace std;

int main()
{
	int x,y,i,j,array[50][50];
	cout<<"Enter number of rows\n";
	cin>>x;
	cout<<"Enter number of columns\n";
	cin>>y;
	cout<<"Start entering elements row-wise\n";
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			cin>>array[i][j];
		}
	}
	cout<<"Array you entered is :-\n";
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			cout<<array[i][j]<<' ';
		}
		cout<<endl;
	}
	cout<<"Transpose of your array is :-\n";
	for(i=0;i<y;i++)
	{
		for(j=0;j<x;j++)
		{
			cout<<array[j][i]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
