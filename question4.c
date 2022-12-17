#include<stdio.h>
int squar(int);
int main()
{
    int n,x;
    printf("Enter a number:");
    scanf("%d",&n);
    x=squar(n);
    printf("Sum of square of first %d natural numbers are %d",n,x);
    return 0;
}
int sum;
int squar(int n)
{
    if(n==0)
        return 0;
    sum=n*n + squar(n-1);
    return sum;
}