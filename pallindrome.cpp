#include<iostream>

using namespace std;

int main()
{
	int i,j,n;
	char array[100];
	cout<<"Enter the length\n";
	cin>>n;
	cout<<"Enter the string\n";
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	for(i=0;i<n/2;i++)
	{
		if(array[i]==array[n-1])
		{
			cout<<"Matched ";
			n--;
		}
		else
		{
			cout<<"Not a pallindrome !\n";
		}
	}
	return 0;
}
