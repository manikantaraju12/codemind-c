#include<stdio.h>
int main(){
	char c[1000];
	int i,k=0;
	scanf("%[^
]s",c);
		for(i=0;c[i]!=NULL;i++){
		     if(c[i]>=97 && c[i]<=122){
		         k++;
		     }
		}
		printf("%d",k);
}