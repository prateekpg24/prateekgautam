#include<iostream>
using namespace std;

int main()
{
	int i,n,j,k=0,c=0,diff[100],array[100];
	cout<<"Enter the array lenght\n";
	cin>>n;
	cout<<"Enter the array\n";
	for(i=0;i<n;i++)
	cin>>array[i];
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(array[j]>array[i])
			{
				diff[k]=array[j]-array[i];
				k=k+1;
				
			}
		}
	}
	
	for(i=0;i<n;i++)
	cout<<diff[i];
	return 0;
	
}
