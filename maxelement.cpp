#include<iostream>

using namespace std;

int main()
{
	int n,i,j,array[50],sum=1000;
	cout<<"Enter the array length\n";
	cin>>n;
	cout<<"Enter the array\n";
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(((array[j]-array[i])>0) && ((array[j]-array[i])<sum))
			{
				sum=array[j]-array[i];
				array[i]=array[j];     //overwrite again and again
			}
			
		}
		
	}
	for(i=0;i<n;i++)
	{
		cout<<array[i]<<' ';
	}
	return 0;
}
