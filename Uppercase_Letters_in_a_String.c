#include<stdio.h>
int main(){
	char c[65];
	int i,k=0;
	scanf("%[^
]s",c);
		for(i=0;c[i]!=NULL;i++){
		     if(c[i]>=65 && c[i]<=90){
		         k++;
		     }
		}
		printf("%d",k);
}