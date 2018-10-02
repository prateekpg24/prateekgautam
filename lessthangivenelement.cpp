#include<iostream>

using namespace std;

int main()
{
	int i,n,j,temp,array[100];
	cout<<"Enter the number of elements in the array\n";
	cin>>n;
	cout<<"Start Entering elemtns\n";
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	for(j=0;j<n-1;j++)
	{
		
	for(i=0;i<n-1;i++)
	{
		if(array[i]>array[i+1])
		{
			temp=array[i];
			array[i]=array[i+1];
			array[i+1]=temp;
		}
	
	}
	}
	
	for(i=0;i<n;i++)
	{
		cout<<array[i];
	}
	return 0;
	
}

