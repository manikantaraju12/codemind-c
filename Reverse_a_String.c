#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	scanf("%[^
]s",s);
	int i=0,t;
	int j=strlen(s)-1;
while(i<=j)
{
	t=s[i];
	s[i]=s[j];
	s[j]=t;
	i++;
	j--;
	
}


	printf("%s ",s);

}