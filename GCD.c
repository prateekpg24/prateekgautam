#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int i,j,n1,n2,temp,array1[100],array2[100],array3[200];
	printf("Enter the size of first array\n");
	scanf("%d",&n1);
	printf("Enter the first array\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&array1[i]);
	}
	printf("Enter the size of second array\n");
	scanf("%d",&n2);
	printf("Enter the second array\n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&array2[i]);
	}
	for(j=0;j<n1;j++)
	{
		
	for(i=0;i<n1-1;i++)
	{
		if(array1[i+1]>array1[i])
		{
			temp=array1[i+1];
			array1[i+1]=array1[i];
			array1[i]=temp;
		}
	}
    }
    for(i=0;i<n1;i++)
	{
		scanf("%d",&array1[i]);
	}
	return 0;

}
