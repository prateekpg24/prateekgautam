#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str1("hihihihihi name is PG");
	string str2(str1);
	string str3(10,'#');
	string str4(str1,4,3);
	string str5(str1.begin(),str1.begin()+5);
	str3=str1;
	cout<<str3;
	const char* charstr = str1.c_str();
    printf("%s\n", charstr);
	return 0;
}
