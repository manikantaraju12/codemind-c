#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int sum1=0;
	for(i=0;i<n;i++)
	{
	    if(arr[i]%2!=0)
	    
		sum1=sum1+arr[i];
	}
	int sum2=0;
	for(i=0;i<n;i++)
	{
	    if(arr[i]%2==0)
	    
		sum2=sum2+arr[i];
	}
	int s3=abs(sum1-sum2);
	printf("%d",s3);
}