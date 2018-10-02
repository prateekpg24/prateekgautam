#include<stdio.h>

int main()
{
	int array[100],i,n,k,miss[50];
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the increasing array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
    	if((array[i+1]-array[i])!=1)
		{
			miss[i]=(array[i+1]-array[i]);
		}
	}
	printf("Enter k\n");
	scanf("%d",&k);
	printf("%d",miss[k]);
    
    return 0;
}
