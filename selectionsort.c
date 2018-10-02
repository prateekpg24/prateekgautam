#include<stdio.h>

void selectionsort(int array[], int n);

int main()
{
	int i,n,array[100];
	printf("Enter the array length\n");
	scanf("%d",&n);
	printf("Enter the array to be sorted\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	selectionsort(array,n);
	return 0;
}

void selectionsort(int array[], int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(array[i]>array[j])
			{
				temp=array[i];
			    array[i]=array[j];
			    array[j]=temp;
			}
		}
	}
	if((n%2)!=0)
	{
		for(i=1;i<=n;i++)
	    {
		    printf("%d ",array[i]);
	    }
    }
    else
    {
    	for(i=0;i<n;i++)
	    {
		    printf("%d ",array[i]);
	    }
	}
}
