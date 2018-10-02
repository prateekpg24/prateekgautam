#include<iostream>

using namespace std;

int main()
{
	int x,y,i,j,k,l,array[50][50];
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
	
	cout<<"Array after conversion is :-\n";
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			if((array[i][j])==0)
			{
				for(k=0;k<y;k++)
				{
					
					array[k][j]=0;
					array[i][k]=0;
				    
				}
			}
		}
	}
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			cout<<array[i][j]<<' ';
		}
		cout<<endl;
	}
	
	return 0;
}
