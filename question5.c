#include<stdio.h>
int sumdigt(int);
int main()
{
    int n,x;
    printf("enter a minimum two digits number:");
    scanf("%d",&n);
    x=sumdigt(n);
    printf("Sum of %d numbers are %d",n,x);
    return 0;
}
int sum=0;
int sumdigt(int n)
{
    if(n==0)
        return 0;
    sumdigt(n/10);
    sum+=n%10;
    return sum;
}