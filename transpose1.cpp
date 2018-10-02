#include <iostream>

using namespace std;

void Transpose(int n,int a[][]);

int main() 
{
	int T,i,j,N,A[100][100];
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d",&N);
	    for(i=0;i<N;i++)
	    {
	        for(j=0;j<N;j++)
	        {
	            scanf("%d",&A[i][j]);
	        }
	    }
	    Transpose(N,A);
	}
	return 0;
}

void Transpose(int n,int a[][])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[j][i]<<' ';
        }
        <<endl;
    }
}
