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
	int sum=0,f=0;
	int avg;
	for(i=0;i<n;i++)
	{
	   sum=sum+arr[i];
	}
	avg=sum/n;
	for(i=0;i<n;i++)
	{
	    if(avg>=arr[i]){
	        f++;
	    }
	}
	printf("%d",f);
}