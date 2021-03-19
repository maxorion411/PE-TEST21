#include<stdio.h>
int main()
{
	int i,n,sum = 0;
	scanf("%d",&n);
	i = n-3;
	for ( i ; i <= n-1; i++)
	{
		sum = sum + i;
	}
	printf("\nOUTPUT:");
	printf("\n%d", sum);
}
	
