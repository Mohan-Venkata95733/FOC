#include<stdio.h>


int main()
{
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	
	printf("%d",sum/n);
	
}
