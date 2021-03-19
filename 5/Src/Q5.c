#include <stdio.h>
#include<math.h>
#include<stdbool.h>
void input(int a[],int n)
{ 	int i;
   	for(i = 0; i<n ; i++)
    {
    	scanf("%d",&a[i]);
    }
  
}
void output(int a[],int n)
{
	int i;
	for(i = 0; i<n ; i++)
    {
    	printf("%d\t",a[i]);
    }
}
void opposite(int a[], int n)
{
	int i,count =0;
	for (i; i <n; i++)
	{
		if (a[i] != a[n-1-i])
		count++;
	}
	if (count ==0)
	printf ("1")	;
	else
	printf ("0");
}
int main()
{
	int a[100];
	int n;
	scanf("%d",&n);
	input(a,n);
	printf("\nOUTPUT:\n");
	opposite(a,n);
//	output(a,n);
}
