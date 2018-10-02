#include<iostream>

using namespace std;

int main()
{
	int array[100],n,m,i,j,k,l,sum;
	cout<<"Enter the array length\n";
	cin>>n;
	cout<<"Enter sum\n";
	cin>>sum;
	cout<<"Start entering array\n";
	
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	m=n/2;
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m-2;j++)
		{
			for(k=j+1;k<m-1;k++)
			{
				for(l=k+1;l<m;l++)
				{
					if((array[i]+array[j]+array[k]+array[l])==sum)
					{
						cout<<"%d ,%d, %d, %d"<<array[i]<<array[j]<<array[k]<<array[l];
					}
				}
			}
		}
	}
	
	return 0;
}
