#include<stdio.h>
int main()
{
    int p,c,b,m,cs,t,per;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);
    t=p+c+b+m+cs;
    per=((t*100)/500);
    if(per>=90)
    printf("Grade A");
    else if(per>=80)
    printf("Grade B");
    else if(per>=70)
    printf("Grade C");
    else if(per>=60)
    printf("Grade D");
    else if(per>=40)
    printf("Grade E");
    else if(per<40)
    printf("Grade F");
}