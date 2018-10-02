#include<iostream>
using namespace std;

int main()
{
    int i,n,c=0;
    int array[20];
    cout<<"Enter the length of array\n";
    cin>>n;
    cout<<"Enter the array elements\n";
    for(i=0;i<n;i++)
    {
        cin>>array[i];
        c=c+array[i];
    }
    cout<<"Sum of the array elements is " << c;
    return 0;
}

