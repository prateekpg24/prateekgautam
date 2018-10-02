#include<stdio.h>

int binarysearch(int array[],int l,int r,int x);

int main()
{
	int result,x,n,i,array[100];
	printf("Enter the length of array\n");
	scanf("%d",&n);
	printf("Enter the sorted array\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Enter the element to be searched\n");
	scanf("%d",&x);
	result=binarysearch(array,0,n-1,x);
	return result;
}

int binarysearch(int array[],int l,int r, int x)
{
	int mid=l+(r-1)/2;
	if(array[mid]==x)
	return mid;
	else if(x<array[mid])
	return binarysearch(array,l,mid-1,x);
	else
	return binarysearch(array,mid+1,r,x);
}
