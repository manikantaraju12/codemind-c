#include<stdio.h>
#include<string.h>
int main(){
    char s[100],e[100];
    int i,k,l,m=0;
    scanf("%s%s",s,e);
    k=strlen(s);
    l=strlen(e);
    if(k==l)
    {
    for(i=0;i<k;i++)
    {
        if(s[i]==e[i])
            m++;
    }
    if(m==k)
    printf("Strings are Equal");
    else
    printf("Strings are not Equal");
    }
    else
    printf("Strings are not Equal");
    
}