#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int sum=0;
	float avg;
	for(i=0;i<n;i++)
	{
	   sum=sum+arr[i];
	}
	avg=float(sum)/n;
	printf("%.2f",avg);
}