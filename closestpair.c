#include<stdio.h>

void FindClosestPairToSum(int n, int m, int A[],int B[],int x);

int main()
{
	int T,i,n,m,A[50],B[50],x;
	printf("Enter T\n");
	scanf("%d",&T);
	while(T--)
	{
	    printf("Enter n\n");
	    scanf("%d",&n);
	    printf("Enter m\n");
	    scanf("%d",&m);
	    printf("Start Entering array A\n");
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&A[i]);
	    }
	    printf("Start Entering array B\n");
	    for(i=0;i<m;i++)
	    {
	        scanf("%d",&B[i]);
	    }
	    printf("Enter x\n");
	    scanf("%d",&x);
	    FindClosestPairToSum(n,m,A,B,x);
	}
	return 0;
}

void FindClosestPairToSum(int n, int m, int A[],int B[],int x)
{
    int i,j,p,q;
    int diff=30;
    for(i=0;i<n;i++)
    {
        for(j=0;i<m;j++)
        {
            if((A[i]+B[j])<diff)
            p=A[i];
            q=B[j];
        }
    }
    printf("%d %d",p,q);
}
