#include<stdio.h>
int main()
{ 
	int sum, i,n;
	printf("Enter n :");
	sum = 0;
	scanf_s("%d", &n);
	for (i = 1;i <= n;i++)
	{
		sum = sum + i;
	}

	printf("The sum is %d\n",sum);
	
	return 0;
}