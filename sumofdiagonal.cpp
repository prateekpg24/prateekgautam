#include<iostream>

using namespace std;

int main()
{
	int i,j,temp,n,sum=0,array1D[100],array2D[100][100];
	cout<<"Enter the value of n\n";
	cin>>n;
	cout<<"Enter the 1D array\n";
	for(i=0;i<n;i++)
	cin>>array1D[i];
	cout<<"Enter the 2D array\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>array2D[i][j];
		}
	}
	cout<<"Maximum element is 1D array is :-\n";
	for(j=0;j<n-1;j++)
	{
		
	for(i=0;i<n-1;i++)
	{
		if(array1D[i]>array1D[i+1])
		{
			temp=array1D[i];
			array1D[i]=array1D[i+1];
			array1D[i+1]=temp;
		}
	
	}
	}
	cout<<array1D[n-1]<<endl;
	
	for(i=0;i<n;i++)
	{
		for(j=i;j<=i;j++)
		{
			sum=sum+array2D[i][j];
		}
	}
	
	cout<<"Sum of diagonal elements off 2D array is :-\n";
	cout<<sum;
return 0;
}
