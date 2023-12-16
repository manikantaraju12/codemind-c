#include<stdio.h>
int main()
{
	int n,o=-1,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	
		if(a[i]%2!=0)
		{
		   o=i;	
		}
	}
	printf("%d",o);
}