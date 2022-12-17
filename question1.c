#include<stdio.h>
int nat(int);
int main()
{
    int n,x;
    printf("Enter a number:");
    scanf("%d",&n);
    x=nat(n);
    printf("Sum of first %d natural number is %d",n,x);
    return 0;
}

int nat(int n)
{
    int sum=0;
    if(n==1)
        return 1;
    nat(n-1);
    return n+nat(n-1);
}