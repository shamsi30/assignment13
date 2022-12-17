#include<stdio.h>
int HCF(int,int);
int main()
{
    int a,b,x;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    x=HCF(a,b);
    printf("HCF of two numbers %d and %d are %d",a,b,x);
    return 0;
}

int HCF(int a,int b)
{
    if(a==b)
        return a;
    if(a%b==0)
        return b;
    if(b%a==0)
        return a;
    if(a>b)
        return (HCF(a%b,b));
    else
        return (HCF(a,b%a));
}