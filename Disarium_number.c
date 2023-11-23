#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,p=0,rev=0,s=0,t;
	scanf("%d",&n);
	int org=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
    while(rev)
    {
        t=rev%10;
        s++;
        p=pow(t,s)+p;
        rev/=10;
        
    }
    if(p==org)
    printf("True");
    else
    printf("False");
}
