#include<stdio.h>
int main(){
    
int u;

scanf("%d", &u);
float c,b,s=0,t,ts=0;

if(u<199)c=1.20; 
else if(u>=200 && u<400)c=1.50;

else if(u>=400 && u<600)c=1.80;
else if (u>600){
	 c=2.00;
}
b=c*u;	 
 ts=(b>400) ?(15*b/100)+b : b+100; 
   printf("%0.2f",ts);


}