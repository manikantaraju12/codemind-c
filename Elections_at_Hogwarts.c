#include<stdio.h>
int main()
{
    int x,y,z,t;
    scanf("%d%d%d",&x,&y,&z);
    t=x+y+z;
    if(x>50)
    printf("Gryffindor");
    else if(y>50)
    printf("Slytherin");
    else if(z>50)
    printf("Hufflepuff");
    else
    printf("NOTA");
}