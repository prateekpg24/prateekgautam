#include<iostream>

using namespace std;

void sort(int arr[],int a);
void print(int arr[],int a);

int main()
{
	int i,n,array1[100],array2[100];
	cout<<"Enter a length for both the arrays\n";
	cin>>n;
	cout<<"Enter 1st array\n";
	for(i=0;i<n;i++)
	{
		cin>>array1[i];
	}
	cout<<"Enter 2nd array\n";
	for(i=0;i<n;i++)
	{
		cin>>array2[i];
	}
	sort(array1,n);
	sort(array2,n);
	print(array1,n);
	print(array2,n);
	return 0;
}

void sort(int arr[],int a)
{
	int i,j,temp;
	for(i=0;i<a-1;i++)
	{
		for(j=1;j<a;j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

void print(int arr[],int a)
{
	int i;
	for(i=0;i<a;i++)
	{
		cout<<arr[i]<<' ';
	}
}
