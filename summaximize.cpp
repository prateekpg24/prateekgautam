#include<iostream>

using namespace std;

int main()
{
	int i,x,n,array[100];
	cout<<"Enter array lenght\n";
	cin>>n;
	cout<<"Enter array\n";
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	while(array[]=={0})
	{
		
	cout<<"Select the number\n";
	cin>>x;
	for(i=0;i<n;i++)
	{
		if(array[i]==x)
		{
			array[i]=0;
			if(array[i]==x-1)
			{
				array[i]=0;
			}
		}		
	}
    }
	return 0;
}
