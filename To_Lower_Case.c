#include<stdio.h>
int main()
{
	char c[20];
	scanf("%[^
]s",c);
	int i=0;
	for(i=0;c[i]!=NULL;i++)
	{
		if(c[i]>='A' && c[i]<='Z')
		c[i]=c[i]+32;
		
	}
	printf("%s",c);
}