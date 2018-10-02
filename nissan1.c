#include <stdio.h>

int main()
{
	int i,n,num,array[1000];
	printf("Enter the number\n");
	scanf("%d",&num);
	n=log10(num) + 1;
	
	if(n%2==0)
	{
	
	for(i=n/2;i<0;i--)
	{
		array[i]=num%10;
		num=num/10;
		num=num/10;
	}
	for(i=0;i<n/2;i++)
		{
			printf("%d ",array[i]);
		}
	}
	else
	{
		for(i=n/2;i<0;i--)
		{
			num=num/10;
			array[i]=num%10;
			num=num/10;
		}
		for(i=0;i<=n/2;i++)
		{
			printf("%d ",array[i]);
		}
	}
	return 0;
}
