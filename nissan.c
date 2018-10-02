#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int i,array[9],num=123456789;
	int n = (log10(num)) + 1;
	printf("%d\n",n);
	for(i=n;i<0;i--)
	{
		array[i]=num%10;
		num=num/10;
	}
	for(i=0;i<9;i++)
	{
		printf("%d ",array[i]);
	}
	
	
	
	
	return 0;
}

