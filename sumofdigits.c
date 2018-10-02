#include<stdio.h>

int main()
{
	int i,sum=0,array[10]={13,11,23,45,22,75,12,78,34,77};
	for(i=0;i<10;i++)
	{
		if(((array[i]%10)+(array[i]/10))>sum)
		sum=((array[i]%10)+(array[i]/10));
	}
	printf("%d",sum);
	return 0;
}
