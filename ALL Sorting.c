#include<stdio.h>

void SelectionSort(int array[]);

int main()
{
	int a[]={65,44,18,20,10};
	SelectionSort(a);
	return 0;
}

void SelectionSort(int array[])
{
	int i,j,min,temp;
	for(i=0;i<sizeof(array);i++)
	{
		min=array[i];
		for(j=i+1;j<sizeof(array);j++)
		{
			if(array[j]<min)
			{
				temp=array[j];
				array[j]=min;
				min=temp;
			}
		}
	}
	for(i=0;i<sizeof(array);i++)
	{
		printf("%d",array[i]);
	}
}
