#include<iostream>
using namespace std;

int updateVar(int *a);
int main()
{
	int x=20;
	int *ptr=&x;
	updateVar(ptr);
	return 0;
}

int updateVar(int *a)
{
	int y;
	y=*a;
	cout<<y+10;
	return 0;
}
