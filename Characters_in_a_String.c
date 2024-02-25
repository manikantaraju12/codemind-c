#include<stdio.h>
#include<string.h>
int main()
{
    char ch[50];
    int a;
    scanf("%[^
]",&ch);
    a=strlen(ch);
    printf("%d",a);
}