#include<stdio.h>
int power(int,int);
int main()
{
    int n,x,p,b; /*p=power  b=base*/
    printf("Enter power:");
    scanf("%d",&p);
    printf("Enter base number:");
    scanf("%d",&b);
    x=power(b,p);
    printf("power of %d  is %d",b,x);
    return 0;
}

int power(int b,int p)
{
    if(p==0)
        return 1;
    return b*power(b,p-1);
}