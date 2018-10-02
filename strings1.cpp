#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s1,s2;
	cout<<"Enter your first string\n";
	getline(cin,s1);
	cout<<"Enter your second string\n";
	getline(cin,s2);
	if(s1.size()>s2.size())
	{
	cout << "Longer string is :" << s1 << endl;
	cout << "Size of the longer string is :" << s1.size() <<endl;
	}
	else
	{
	cout<< "Longer string is :" << s2 <<endl;
	cout << "Size of the longer string is :" << s2.size() <<endl;	
	}
	return 0;
}
